#include "fizzbuzz.hxx"

#include <benchmark/benchmark.h>

#include <iostream>
#include <random>
#include <string>

auto fizzbuzz_runner = [](benchmark::State &st) {
  for (auto _ : st) {
    fizzbuzz(gen());
  }
};

int main(int argc, char **argv) {
  benchmark::RegisterBenchmark("fizzbuzz", fizzbuzz_runner);
  benchmark::Initialize(&argc, argv);
  benchmark::RunSpecifiedBenchmarks();
}
