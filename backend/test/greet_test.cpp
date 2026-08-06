#include "tauri_app_template/greet.hpp"

#include <gtest/gtest.h>

TEST(Greet, ReturnsExpectedMessage) {
    EXPECT_EQ(tauri_app_template::greet("Tauri-App-Template"), "Hello, Tauri-App-Template!");
}

TEST(Greet, HandlesDefaultCase) {
    EXPECT_EQ(tauri_app_template::greet("world"), "Hello, world!");
}
