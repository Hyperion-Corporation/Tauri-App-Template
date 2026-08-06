find_package(GTest QUIET)
if(NOT GTest_FOUND)
    include(FetchContent)
    FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.zip
    )
    FetchContent_MakeAvailable(googletest)
endif()

add_executable(tauri_app_template_tests greet_test.cpp)
target_link_libraries(tauri_app_template_tests PRIVATE tauri_app_template_cpp GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(tauri_app_template_tests)
