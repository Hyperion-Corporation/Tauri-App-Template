# Tauri-App-Template

[![CI](https://github.com/ACFHarbinger/Tauri-App-Template/actions/workflows/ci.yml/badge.svg)](https.github.com/ACFHarbinger/Tauri-App-Template/actions/workflows/ci.yml)
[![Docs](https://github.com/ACFHarbinger/Tauri-App-Template/actions/workflows/docs.yml/badge.svg)](https://github.com/ACFHarbinger/Tauri-App-Template/actions/workflows/docs.yml)
[![License](https://img.shields.io/badge/license-AGPL--3.0--only-blue.svg)](LICENSE.md)

`Tauri-App-Template` is a standardized template repository for building high-performance desktop applications powered by **Tauri** (Rust / TypeScript), a **C++ native backend**, and a **Python middleware** layer.

---

## 🏛️ Architecture Overview

The repository is structured into three primary layers:

```
Tauri-App-Template/
├── backend/            # Native C++ Engine (High-Performance Core / Native Algorithms)
│   ├── CMakeLists.txt
│   ├── include/
│   ├── src/
│   ├── test/
│   └── benchmark/
├── middleware/         # Python Middleware (Deep Learning Models & C++ Bridge)
│   ├── pyproject.toml
│   ├── src/
│   │   ├── torch/      # PyTorch model definitions & inference routines
│   │   ├── flow/       # TensorFlow model definitions & pipeline routines
│   │   └── jinja/      # Templating & HTML rendering helpers
│   ├── config/
│   └── test/
└── frontend/           # Modern TypeScript UI & Tauri Desktop Wrapper
    ├── package.json
    ├── src/            # Vite + React + TypeScript frontend UI
    └── src-tauri/      # Tauri Rust application shell & native desktop bindings
```

### Module Responsibilities

1. **Frontend (`frontend/`)**: Modern UI powered by Vite, React, and TypeScript. Integrates `src-tauri` (Rust) for desktop lifecycle management, native windows, IPC, and tray support.
2. **Middleware (`middleware/`)**: Python layer used to host PyTorch and TensorFlow Deep Learning models, provide machine learning inference APIs, and bridge C++ native modules to the Tauri frontend.
3. **Backend (`backend/`)**: High-performance C++ core engineered with modern C++ standards, built via CMake, providing high-speed compute, image/data processing, and native algorithms.

---

## 🚀 Quickstart

### Prerequisites

- **Build Tools**: `cmake` (>= 3.20), C++ compiler (`g++` / `clang++` / `MSVC`)
- **Python Environment**: `python` (>= 3.11), `uv` (or `pip`)
- **Node.js Environment**: `node` (>= 18), `npm` (or `pnpm`)
- **Rust Toolchain**: `rustc`, `cargo` (for Tauri desktop app)
- **Task Runner**: `just` (optional, but recommended)

### Development Workflow

1. **Set Up Development Environment**:
   ```bash
   just setup
   ```

2. **Build All Modules**:
   ```bash
   just build
   ```

3. **Run Test Suites**:
   ```bash
   just test
   ```

4. **Launch Frontend / Tauri App**:
   ```bash
   cd frontend && npm run dev
   # Or run Tauri dev mode:
   cd frontend && npm run tauri:dev
   ```

---

## 🛠️ Task Runner Commands (`just`)

| Command | Description |
| :--- | :--- |
| `just build` | Build C++ backend, Python middleware, and TypeScript/Tauri frontend |
| `just test` | Run tests across C++ (`ctest`), Python (`pytest`), and TypeScript (`vitest`) |
| `just lint` | Run linters across C++ (`clang-format`), Python (`ruff`), and TypeScript (`eslint`) |
| `just bench` | Execute benchmark suites across backend, middleware, and frontend |
| `just docs` | Generate project documentation site |

---

## 📄 License

This repository is licensed under [AGPL-3.0-only](LICENSE.md).
