#include "tauri_app_template/greet.hpp"

namespace tauri_app_template {

std::string greet(const std::string& name) {
    return "Hello, " + name + "!";
}

}  // namespace tauri_app_template
