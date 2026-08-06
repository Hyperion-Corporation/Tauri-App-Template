# Root CMakeLists.txt — thin wrapper that delegates to backend/.
#
# This repository has no unified top-level build; each layer (backend, middleware,
# frontend) can be built independently (see the root justfile). This file exists so
# `cmake -S . -B build` from the repo root builds the C++ backend module.
cmake_minimum_required(VERSION 3.20)
project(tauri_app_template LANGUAGES CXX)

add_subdirectory(backend)
