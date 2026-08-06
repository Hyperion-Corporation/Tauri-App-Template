#include <benchmark/benchmark.h>

#include "tauri_app_template/greet.hpp"

static void BM_Greet(benchmark::State& state) {
    for (auto _ : state) {
        benchmark::DoNotOptimize(tauri_app_template::greet("world"));
    }
}
BENCHMARK(BM_Greet);
