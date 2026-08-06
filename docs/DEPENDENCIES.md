# Dependencies

| Module | Location | Manifest | Package Manager |
| --- | --- | --- | --- |
| Frontend | `frontend/` | `package.json`, `src-tauri/Cargo.toml` | `npm`, `cargo` |
| Middleware | `middleware/` | `pyproject.toml` | `uv` |
| Backend | `backend/` | `CMakeLists.txt` | `CMake` |

Environment-level dependencies are documented under [`env/`](../env/).

See [`DEPENDENCY_POLICY.md`](DEPENDENCY_POLICY.md) for policies on adding, pinning, and upgrading dependencies.
