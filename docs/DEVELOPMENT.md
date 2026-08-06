# Development Guide

## Prerequisites

- **Git**, [`just`](https://github.com/casey/just), `pre-commit`
- **C++ Backend**: `cmake` (>= 3.20) + C++20 compiler (`g++` / `clang++` / `MSVC`)
- **Python Middleware**: `python` (>= 3.11) + `uv`
- **TypeScript Frontend & Tauri**: Node.js (>= 18), `npm`, Rust toolchain (`rustc`, `cargo`)

## Local Setup

```bash
git clone https://github.com/ACFHarbinger/Tauri-App-Template.git
cd Tauri-App-Template
cp .env.example .env
just setup
```

## Module Execution & Development

```bash
# C++ Backend
just build backend
just test backend

# Python Middleware
just build middleware
just test middleware

# TypeScript / Tauri Frontend
cd frontend && npm run dev
cd frontend && npm run tauri:dev
```

## Common Tasks

| Task | Command |
| :--- | :--- |
| Run all tests | `just test` |
| Run all linters | `just lint` |
| Build all modules | `just build` |
| Build documentation | `just docs` |
