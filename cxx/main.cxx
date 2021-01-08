#include "fizzbuzz.hxx"

#include <benchmark/benchmark.h>

#include <iostream>
#include <random>
#include <string>

auto fizzbuzz_runner = [](benchmark::State &st, auto gen) {
  for (auto _ : st) {
    auto res = fizzbuzz(gen());
  }
};

int main(int argc, char **argv) {
  benchmark::RegisterBenchmark("fizzbuzz", fizzbuzz_runner,
                               std::mt19937{std::random_device{}()});
  benchmark::Initialize(&argc, argv);
  benchmark::RunSpecifiedBenchmarks();
}
