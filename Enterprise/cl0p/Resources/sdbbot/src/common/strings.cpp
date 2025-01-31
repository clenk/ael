#include <codecvt>
#include "strings.hpp"

namespace common {

// Convert narrow string to wide string
std::wstring string_to_wstring(const std::string& str) {
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    return converter.from_bytes(str);
}

// Convert wide string to narrow string
std::string wstring_to_string(const std::wstring& str) {
    std::wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t> converter;
    return converter.to_bytes(str);
}

} // namespace common
