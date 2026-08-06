# Architecture

`Tauri-App-Template` provides a modular architecture for desktop applications combining native performance, machine learning capabilities, and a responsive web UI.

## Overview

The application is structured into three primary decoupled tiers:
- **Frontend (`frontend/`)**: User Interface built with React, Vite, TypeScript, and wrapped by Tauri (`src-tauri`) for desktop functionality.
- **Middleware (`middleware/`)**: Python service hosting Deep Learning models (PyTorch/TensorFlow) and acting as a bridge between C++ compute algorithms and the frontend.
- **Backend (`backend/`)**: High-performance C++ core engine for raw compute, memory management, and native performance logic.

## Module Boundaries

| Module | Language / Framework | Primary Responsibility |
| --- | --- | --- |
| `frontend/` | TypeScript, React, Vite, Rust (Tauri) | UI rendering, user interaction, Tauri desktop lifecycle, and IPC |
| `middleware/` | Python (>=3.11), PyTorch, TensorFlow | Machine learning inference, model loading, and C++ module integration |
| `backend/` | C++ (>=20), CMake | Native core engine, high-performance algorithms, and data crunching |

## Architecture Decision Records

Significant decisions are recorded under [`docs/adr/`](adr/) using the [Michael Nygard ADR format](https://cognitect.com/blog/2011/11/15/documenting-architecture-decisions).
