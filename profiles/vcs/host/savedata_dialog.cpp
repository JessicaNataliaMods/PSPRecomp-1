#include "savedata_dialog.hpp"
#include "display_window.hpp"

#include <algorithm>
#include <cstdlib>
#include <string>

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

namespace vcs {
namespace {

SavedataDialogChoice deterministic_choice(const std::vector<SavedataSlotEntry> &slots,
                                           bool saving,
                                           std::string_view current) {
    if (!current.empty()) {
        const auto found = std::find_if(slots.begin(), slots.end(), [&](const auto &slot) {
            return slot.save_name == current && (saving || slot.exists);
        });
        if (found != slots.end()) return {true, found->save_name};
    }
    const auto found = std::find_if(slots.begin(), slots.end(), [&](const auto &slot) {
        return saving || slot.exists;
    });
    if (found != slots.end()) return {true, found->save_name};
    return {};
}

#ifdef _WIN32
std::wstring utf8_to_wide(std::string_view text) {
    if (text.empty()) return {};
    const int needed = MultiByteToWideChar(CP_UTF8, 0, text.data(),
                                            static_cast<int>(text.size()), nullptr, 0);
    if (needed <= 0) return std::wstring(text.begin(), text.end());
    std::wstring result(static_cast<std::size_t>(needed), L'\0');
    MultiByteToWideChar(CP_UTF8, 0, text.data(), static_cast<int>(text.size()),
                        result.data(), needed);
    return result;
}

constexpr int kListId = 1001;
constexpr int kAcceptId = 1002;
constexpr int kCancelId = 1003;

constexpr COLORREF kBgTop = RGB(139, 121, 195);
constexpr COLORREF kBgBottom = RGB(125, 163, 218);
constexpr COLORREF kHorizon = RGB(82, 123, 187);
constexpr COLORREF kPanelFill = RGB(16, 28, 47);
constexpr COLORREF kPanelBorder = RGB(220, 228, 244);
constexpr COLORREF kListFill = RGB(238, 244, 251);
constexpr COLORREF kListEmptyText = RGB(70, 80, 104);
constexpr COLORREF kListSavedText = RGB(20, 41, 76);
constexpr COLORREF kSelection = RGB(44, 126, 218);
constexpr COLORREF kButtonPrimary = RGB(255, 165, 77);
constexpr COLORREF kButtonPrimaryHover = RGB(255, 183, 101);
constexpr COLORREF kButtonSecondary = RGB(226, 231, 241);
constexpr COLORREF kButtonSecondaryHover = RGB(240, 244, 250);
constexpr COLORREF kButtonTextDark = RGB(26, 33, 53);
constexpr COLORREF kButtonTextLight = RGB(255, 255, 255);
constexpr COLORREF kWhite = RGB(255, 255, 255);
constexpr COLORREF kShadow = RGB(28, 33, 56);

struct DialogState {
    const std::vector<SavedataSlotEntry> *slots{};
    bool saving{};
    int selected{-1};
    bool done{};
    bool confirmed{};
    HWND list{};
    HWND accept_button{};
    HWND cancel_button{};
    HFONT title_font{};
    HFONT subtitle_font{};
    HFONT list_font{};
    HFONT button_font{};
    HBRUSH list_brush{};
    HBRUSH dialog_brush{};
};

std::wstring slot_label(const SavedataSlotEntry &slot, std::size_t index) {
    std::wstring line = L"SLOT " + std::to_wstring(index + 1u) + L"   " + utf8_to_wide(slot.save_name);
    line += slot.exists ? L"   SAVED" : L"   EMPTY";
    return line;
}

void create_dialog_fonts(DialogState &state) {
    state.title_font = CreateFontW(-26, 0, 0, 0, FW_BOLD, FALSE, FALSE, FALSE,
        DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY,
        VARIABLE_PITCH, L"Trebuchet MS");
    state.subtitle_font = CreateFontW(-16, 0, 0, 0, FW_SEMIBOLD, FALSE, FALSE, FALSE,
        DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY,
        VARIABLE_PITCH, L"Segoe UI");
    state.list_font = CreateFontW(-18, 0, 0, 0, FW_BOLD, FALSE, FALSE, FALSE,
        DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY,
        VARIABLE_PITCH, L"Trebuchet MS");
    state.button_font = CreateFontW(-17, 0, 0, 0, FW_BOLD, FALSE, FALSE, FALSE,
        DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY,
        VARIABLE_PITCH, L"Segoe UI");
}

void destroy_dialog_resources(DialogState &state) {
    if (state.title_font) DeleteObject(state.title_font);
    if (state.subtitle_font) DeleteObject(state.subtitle_font);
    if (state.list_font) DeleteObject(state.list_font);
    if (state.button_font) DeleteObject(state.button_font);
    if (state.list_brush) DeleteObject(state.list_brush);
    if (state.dialog_brush) DeleteObject(state.dialog_brush);
    state.title_font = nullptr;
    state.subtitle_font = nullptr;
    state.list_font = nullptr;
    state.button_font = nullptr;
    state.list_brush = nullptr;
    state.dialog_brush = nullptr;
}

COLORREF lerp_color(COLORREF a, COLORREF b, float t) {
    const auto mix = [&](int x, int y) {
        return static_cast<int>(static_cast<float>(x) + (static_cast<float>(y - x) * t));
    };
    return RGB(mix(GetRValue(a), GetRValue(b)),
               mix(GetGValue(a), GetGValue(b)),
               mix(GetBValue(a), GetBValue(b)));
}

void fill_vertical_gradient(HDC hdc, const RECT &rect, COLORREF top, COLORREF bottom) {
    const int raw_height = rect.bottom - rect.top;
    const int height = raw_height > 1 ? raw_height : 1;
    for (int y = 0; y < height; ++y) {
        const float t = static_cast<float>(y) / static_cast<float>(height - 1 <= 0 ? 1 : height - 1);
        const HBRUSH brush = CreateSolidBrush(lerp_color(top, bottom, t));
        RECT band{rect.left, rect.top + y, rect.right, rect.top + y + 1};
        FillRect(hdc, &band, brush);
        DeleteObject(brush);
    }
}

void draw_skyline(HDC hdc, const RECT &client) {
    const int width = client.right - client.left;
    const int height = client.bottom - client.top;
    const int horizon_y = client.top + static_cast<int>(height * 0.67f);

    RECT horizon{client.left, horizon_y, client.right, client.bottom};
    fill_vertical_gradient(hdc, horizon, RGB(64, 111, 183), RGB(106, 174, 225));

    HPEN line_pen = CreatePen(PS_SOLID, 1, RGB(91, 143, 202));
    HPEN old_pen = static_cast<HPEN>(SelectObject(hdc, line_pen));
    MoveToEx(hdc, client.left, horizon_y, nullptr);
    LineTo(hdc, client.right, horizon_y);
    SelectObject(hdc, old_pen);
    DeleteObject(line_pen);

    const RECT water_reflection{client.left, horizon_y + 8, client.right, client.bottom};
    for (int y = water_reflection.top; y < water_reflection.bottom; y += 4) {
        const int alpha_band = (y - water_reflection.top) / 4;
        const COLORREF c = alpha_band % 2 == 0 ? RGB(105, 165, 215) : RGB(95, 152, 205);
        HBRUSH brush = CreateSolidBrush(c);
        const int band_bottom = (y + 2) < water_reflection.bottom ? (y + 2) : water_reflection.bottom;
        RECT band{water_reflection.left, y, water_reflection.right, band_bottom};
        FillRect(hdc, &band, brush);
        DeleteObject(brush);
    }

    HBRUSH skyline_brush = CreateSolidBrush(kHorizon);
    HBRUSH old_brush = static_cast<HBRUSH>(SelectObject(hdc, skyline_brush));
    HPEN skyline_pen = CreatePen(PS_SOLID, 1, kHorizon);
    old_pen = static_cast<HPEN>(SelectObject(hdc, skyline_pen));

    auto tower = [&](int x, int w, int h) {
        Rectangle(hdc, x, horizon_y - h, x + w, horizon_y);
    };
    tower(client.left + width * 6 / 100, width * 4 / 100, height * 9 / 100);
    tower(client.left + width * 13 / 100, width * 6 / 100, height * 7 / 100);
    tower(client.left + width * 24 / 100, width * 5 / 100, height * 10 / 100);
    tower(client.left + width * 32 / 100, width * 8 / 100, height * 11 / 100);
    tower(client.left + width * 44 / 100, width * 5 / 100, height * 8 / 100);
    tower(client.left + width * 53 / 100, width * 4 / 100, height * 6 / 100);
    tower(client.left + width * 66 / 100, width * 6 / 100, height * 13 / 100);
    tower(client.left + width * 79 / 100, width * 5 / 100, height * 8 / 100);
    tower(client.left + width * 87 / 100, width * 4 / 100, height * 18 / 100);
    tower(client.left + width * 91 / 100, width * 3 / 100, height * 12 / 100);

    auto palm = [&](int x, int trunk_h, int lean) {
        MoveToEx(hdc, x, horizon_y, nullptr);
        LineTo(hdc, x + lean, horizon_y - trunk_h);
        const int top_x = x + lean;
        const int top_y = horizon_y - trunk_h;
        MoveToEx(hdc, top_x, top_y, nullptr);
        LineTo(hdc, top_x - 16, top_y - 7);
        MoveToEx(hdc, top_x, top_y, nullptr);
        LineTo(hdc, top_x + 17, top_y - 5);
        MoveToEx(hdc, top_x, top_y, nullptr);
        LineTo(hdc, top_x - 14, top_y + 6);
        MoveToEx(hdc, top_x, top_y, nullptr);
        LineTo(hdc, top_x + 13, top_y + 5);
    };
    palm(client.left + width * 12 / 100, height * 10 / 100, -8);
    palm(client.left + width * 20 / 100, height * 12 / 100, 6);
    palm(client.left + width * 48 / 100, height * 10 / 100, -4);
    palm(client.left + width * 59 / 100, height * 13 / 100, 8);

    SelectObject(hdc, old_pen);
    SelectObject(hdc, old_brush);
    DeleteObject(skyline_pen);
    DeleteObject(skyline_brush);
}

void paint_background(HDC hdc, HWND window, const DialogState &state) {
    RECT client{};
    GetClientRect(window, &client);
    fill_vertical_gradient(hdc, client, kBgTop, kBgBottom);
    draw_skyline(hdc, client);

    RECT shadow{58, 48, client.right - 54, client.bottom - 44};
    OffsetRect(&shadow, 4, 5);
    HBRUSH shadow_brush = CreateSolidBrush(kShadow);
    FillRect(hdc, &shadow, shadow_brush);
    DeleteObject(shadow_brush);

    RECT panel{56, 44, client.right - 56, client.bottom - 48};
    HBRUSH panel_brush = CreateSolidBrush(kPanelFill);
    FillRect(hdc, &panel, panel_brush);
    DeleteObject(panel_brush);

    HPEN border_pen = CreatePen(PS_SOLID, 2, kPanelBorder);
    HPEN old_pen = static_cast<HPEN>(SelectObject(hdc, border_pen));
    HBRUSH hollow = static_cast<HBRUSH>(GetStockObject(HOLLOW_BRUSH));
    HBRUSH old_brush = static_cast<HBRUSH>(SelectObject(hdc, hollow));
    Rectangle(hdc, panel.left, panel.top, panel.right, panel.bottom);
    SelectObject(hdc, old_pen);
    SelectObject(hdc, old_brush);
    DeleteObject(border_pen);

    SetBkMode(hdc, TRANSPARENT);

    RECT title{86, 62, client.right - 86, 96};
    HFONT old_font = static_cast<HFONT>(SelectObject(hdc, state.title_font));
    SetTextColor(hdc, kWhite);
    DrawTextW(hdc, state.saving ? L"SAVE GAME" : L"LOAD GAME", -1, &title,
              DT_LEFT | DT_VCENTER | DT_SINGLELINE);

    RECT subtitle{88, 100, client.right - 88, 126};
    SelectObject(hdc, state.subtitle_font);
    SetTextColor(hdc, RGB(232, 237, 245));
    DrawTextW(hdc,
              state.saving ? L"Choose a slot to save your progress." : L"Choose a saved game to continue.",
              -1, &subtitle, DT_LEFT | DT_VCENTER | DT_SINGLELINE);

    RECT tag{client.right - 230, 70, client.right - 88, 98};
    SetTextColor(hdc, RGB(255, 196, 125));
    DrawTextW(hdc, L"VICE CITY STORIES", -1, &tag,
              DT_RIGHT | DT_VCENTER | DT_SINGLELINE);

    RECT hint{88, client.bottom - 92, client.right - 88, client.bottom - 72};
    SetTextColor(hdc, RGB(220, 228, 244));
    DrawTextW(hdc, L"Double-click a slot or press Confirm.", -1, &hint,
              DT_LEFT | DT_VCENTER | DT_SINGLELINE);
    SelectObject(hdc, old_font);
}

void accept_selection(HWND window, DialogState &state) {
    const LRESULT selected = SendMessageW(state.list, LB_GETCURSEL, 0, 0);
    if (selected == LB_ERR) return;
    const int index = static_cast<int>(selected);
    if (index < 0 || static_cast<std::size_t>(index) >= state.slots->size()) return;
    if (!state.saving && !(*state.slots)[static_cast<std::size_t>(index)].exists) return;
    state.selected = index;
    state.confirmed = true;
    state.done = true;
    DestroyWindow(window);
}

void draw_button(const DRAWITEMSTRUCT &dis, bool primary) {
    HDC hdc = dis.hDC;
    RECT rc = dis.rcItem;
    const bool pressed = (dis.itemState & ODS_SELECTED) != 0;
    const bool disabled = (dis.itemState & ODS_DISABLED) != 0;
    const COLORREF fill = primary
        ? (pressed ? kButtonPrimaryHover : kButtonPrimary)
        : (pressed ? kButtonSecondaryHover : kButtonSecondary);
    const COLORREF text = primary ? kButtonTextDark : kButtonTextDark;

    HBRUSH brush = CreateSolidBrush(fill);
    HPEN pen = CreatePen(PS_SOLID, 1, primary ? RGB(255, 212, 166) : RGB(212, 220, 234));
    HBRUSH old_brush = static_cast<HBRUSH>(SelectObject(hdc, brush));
    HPEN old_pen = static_cast<HPEN>(SelectObject(hdc, pen));
    RoundRect(hdc, rc.left, rc.top, rc.right, rc.bottom, 10, 10);
    SelectObject(hdc, old_brush);
    SelectObject(hdc, old_pen);
    DeleteObject(brush);
    DeleteObject(pen);

    SetBkMode(hdc, TRANSPARENT);
    SetTextColor(hdc, disabled ? RGB(132, 138, 151) : text);
    wchar_t buffer[64]{};
    GetWindowTextW(dis.hwndItem, buffer, 64);
    DrawTextW(hdc, buffer, -1, &rc, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

    if (dis.itemState & ODS_FOCUS) {
        RECT focus = rc;
        InflateRect(&focus, -4, -4);
        DrawFocusRect(hdc, &focus);
    }
}

void draw_list_item(const DRAWITEMSTRUCT &dis, const DialogState &state) {
    if (dis.itemID == static_cast<unsigned int>(-1) || !state.slots) return;
    const auto &slot = (*state.slots)[dis.itemID];
    const bool selected = (dis.itemState & ODS_SELECTED) != 0;
    const bool exists = slot.exists;

    COLORREF back = exists ? kListFill : RGB(244, 246, 251);
    COLORREF fore = exists ? kListSavedText : kListEmptyText;
    if (selected) {
        back = kSelection;
        fore = kWhite;
    }

    HBRUSH back_brush = CreateSolidBrush(back);
    FillRect(dis.hDC, &dis.rcItem, back_brush);
    DeleteObject(back_brush);

    RECT text_rc = dis.rcItem;
    InflateRect(&text_rc, -12, 0);
    SetBkMode(dis.hDC, TRANSPARENT);
    SetTextColor(dis.hDC, fore);
    std::wstring line = slot_label(slot, dis.itemID);
    DrawTextW(dis.hDC, line.c_str(), -1, &text_rc, DT_LEFT | DT_VCENTER | DT_SINGLELINE);

    if (dis.itemState & ODS_FOCUS) {
        RECT focus = dis.rcItem;
        InflateRect(&focus, -2, -2);
        DrawFocusRect(dis.hDC, &focus);
    }
}

LRESULT CALLBACK savedata_window_proc(HWND window, UINT message, WPARAM wparam, LPARAM lparam) {
    DialogState *state = reinterpret_cast<DialogState *>(GetWindowLongPtrW(window, GWLP_USERDATA));
    if (message == WM_NCCREATE) {
        const auto *create = reinterpret_cast<const CREATESTRUCTW *>(lparam);
        state = static_cast<DialogState *>(create->lpCreateParams);
        SetWindowLongPtrW(window, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(state));
    }

    switch (message) {
    case WM_CREATE: {
        if (!state) return -1;
        create_dialog_fonts(*state);
        state->list_brush = CreateSolidBrush(kListFill);
        state->dialog_brush = CreateSolidBrush(kPanelFill);

        state->list = CreateWindowExW(0, L"LISTBOX", L"",
            WS_CHILD | WS_VISIBLE | WS_TABSTOP | WS_VSCROLL | LBS_NOTIFY | LBS_OWNERDRAWFIXED | LBS_NOINTEGRALHEIGHT,
            86, 136, 588, 240, window,
            reinterpret_cast<HMENU>(static_cast<INT_PTR>(kListId)), nullptr, nullptr);
        if (!state->list) return -1;
        SendMessageW(state->list, WM_SETFONT, reinterpret_cast<WPARAM>(state->list_font), TRUE);
        for (std::size_t i = 0; i < state->slots->size(); ++i) {
            std::wstring line = slot_label((*state->slots)[i], i);
            SendMessageW(state->list, LB_ADDSTRING, 0, reinterpret_cast<LPARAM>(line.c_str()));
        }

        state->accept_button = CreateWindowExW(0, L"BUTTON", state->saving ? L"CONFIRM" : L"LOAD",
            WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_OWNERDRAW,
            468, 404, 98, 34, window,
            reinterpret_cast<HMENU>(static_cast<INT_PTR>(kAcceptId)), nullptr, nullptr);
        state->cancel_button = CreateWindowExW(0, L"BUTTON", L"CANCEL",
            WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_OWNERDRAW,
            576, 404, 98, 34, window,
            reinterpret_cast<HMENU>(static_cast<INT_PTR>(kCancelId)), nullptr, nullptr);
        SendMessageW(state->accept_button, WM_SETFONT, reinterpret_cast<WPARAM>(state->button_font), TRUE);
        SendMessageW(state->cancel_button, WM_SETFONT, reinterpret_cast<WPARAM>(state->button_font), TRUE);
        return 0;
    }
    case WM_ERASEBKGND:
        return 1;
    case WM_PAINT: {
        PAINTSTRUCT ps{};
        HDC hdc = BeginPaint(window, &ps);
        if (hdc && state) paint_background(hdc, window, *state);
        EndPaint(window, &ps);
        return 0;
    }
    case WM_MEASUREITEM: {
        auto *measure = reinterpret_cast<MEASUREITEMSTRUCT *>(lparam);
        if (measure && measure->CtlID == kListId) {
            measure->itemHeight = 28;
            return TRUE;
        }
        break;
    }
    case WM_DRAWITEM: {
        auto *draw = reinterpret_cast<DRAWITEMSTRUCT *>(lparam);
        if (!draw || !state) break;
        if (draw->CtlID == kListId) {
            draw_list_item(*draw, *state);
            return TRUE;
        }
        if (draw->CtlID == kAcceptId) {
            SelectObject(draw->hDC, state->button_font);
            draw_button(*draw, true);
            return TRUE;
        }
        if (draw->CtlID == kCancelId) {
            SelectObject(draw->hDC, state->button_font);
            draw_button(*draw, false);
            return TRUE;
        }
        break;
    }
    case WM_CTLCOLORLISTBOX:
        if (state && reinterpret_cast<HWND>(lparam) == state->list) {
            HDC hdc = reinterpret_cast<HDC>(wparam);
            SetBkColor(hdc, kListFill);
            SetTextColor(hdc, kListSavedText);
            return reinterpret_cast<INT_PTR>(state->list_brush);
        }
        break;
    case WM_COMMAND:
        if (!state) break;
        if (LOWORD(wparam) == kAcceptId ||
            (LOWORD(wparam) == kListId && HIWORD(wparam) == LBN_DBLCLK)) {
            accept_selection(window, *state);
            return 0;
        }
        if (LOWORD(wparam) == kCancelId) {
            state->done = true;
            state->confirmed = false;
            DestroyWindow(window);
            return 0;
        }
        break;
    case WM_KEYDOWN:
        if (state && wparam == VK_RETURN) {
            accept_selection(window, *state);
            return 0;
        }
        if (state && wparam == VK_ESCAPE) {
            state->done = true;
            state->confirmed = false;
            DestroyWindow(window);
            return 0;
        }
        break;
    case WM_CLOSE:
        if (state) {
            state->done = true;
            state->confirmed = false;
        }
        DestroyWindow(window);
        return 0;
    case WM_DESTROY:
        if (state) {
            state->done = true;
            destroy_dialog_resources(*state);
        }
        return 0;
    }
    return DefWindowProcW(window, message, wparam, lparam);
}

SavedataDialogChoice native_choice(const std::vector<SavedataSlotEntry> &slots,
                                   bool saving,
                                   std::string_view current) {
    static const wchar_t *kClassName = L"VCSNativeSavedataSlotDialog";
    static bool registered = false;
    HINSTANCE instance = GetModuleHandleW(nullptr);
    if (!registered) {
        WNDCLASSW cls{};
        cls.lpfnWndProc = savedata_window_proc;
        cls.hInstance = instance;
        cls.hCursor = LoadCursorW(nullptr, MAKEINTRESOURCEW(32512));
        cls.hbrBackground = reinterpret_cast<HBRUSH>(static_cast<INT_PTR>(COLOR_WINDOW + 1));
        cls.lpszClassName = kClassName;
        registered = RegisterClassW(&cls) != 0 || GetLastError() == ERROR_CLASS_ALREADY_EXISTS;
    }
    if (!registered) return deterministic_choice(slots, saving, current);

    DialogState state{&slots, saving};
    HWND owner = static_cast<HWND>(display_window_surface().window);
    HWND window = CreateWindowExW(WS_EX_DLGMODALFRAME | WS_EX_TOPMOST,
        kClassName, saving ? L"GTA Vice City Stories - Save Game" : L"GTA Vice City Stories - Load Game",
        WS_CAPTION | WS_SYSMENU,
        CW_USEDEFAULT, CW_USEDEFAULT, 760, 500,
        owner, nullptr, instance, &state);
    if (!window) return deterministic_choice(slots, saving, current);

    int initial = -1;
    for (std::size_t i = 0; i < slots.size(); ++i) {
        if (slots[i].save_name == current && (saving || slots[i].exists)) {
            initial = static_cast<int>(i);
            break;
        }
    }
    if (initial < 0) {
        for (std::size_t i = 0; i < slots.size(); ++i) {
            if (saving || slots[i].exists) { initial = static_cast<int>(i); break; }
        }
    }
    if (initial >= 0) {
        SendMessageW(state.list, LB_SETCURSEL, static_cast<WPARAM>(initial), 0);
        SetFocus(state.list);
    }

    RECT rect{};
    GetWindowRect(window, &rect);
    const int width = rect.right - rect.left;
    const int height = rect.bottom - rect.top;
    const int screen_w = GetSystemMetrics(SM_CXSCREEN);
    const int screen_h = GetSystemMetrics(SM_CYSCREEN);
    SetWindowPos(window, HWND_TOPMOST, (screen_w - width) / 2, (screen_h - height) / 2,
                 0, 0, SWP_NOSIZE | SWP_SHOWWINDOW);

    MSG message{};
    while (!state.done && GetMessageW(&message, nullptr, 0, 0) > 0) {
        if (!IsDialogMessageW(window, &message)) {
            TranslateMessage(&message);
            DispatchMessageW(&message);
        }
    }
    if (state.confirmed && state.selected >= 0 &&
        static_cast<std::size_t>(state.selected) < slots.size()) {
        return {true, slots[static_cast<std::size_t>(state.selected)].save_name};
    }
    return {};
}
#endif

} // namespace

SavedataDialogChoice choose_savedata_slot(const std::vector<SavedataSlotEntry> &slots,
                                           bool saving,
                                           std::string_view current_save_name) {
    if (slots.empty()) return {};
    const char *disable = std::getenv("PSPRECOMP_SAVEDATA_NATIVE_DIALOG");
    const bool native_enabled = disable == nullptr ||
        (*disable != '\0' && std::string_view(disable) != "0" &&
         std::string_view(disable) != "false" && std::string_view(disable) != "off");
#ifdef _WIN32
    if (native_enabled) return native_choice(slots, saving, current_save_name);
#else
    (void)native_enabled;
#endif
    return deterministic_choice(slots, saving, current_save_name);
}

} // namespace vcs
