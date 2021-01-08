#include "fizzbuzz.hxx"

#include <benchmark/benchmark.h>

#include <charconv>
#include <iostream>
#include <string>

auto fizzbuzz_runner = [](benchmark::State &st, auto iteration_count) {
  for (auto _ : st) {
    std::string res;
    for (auto i = 1; i <= iteration_count; i++) {
      res += fizzbuzz(i);
      res.push_back('\n');
    }
  }
};

int main(int argc, char **argv) {
  int iteration_count = std::atoi(argv[1]);

  benchmark::RegisterBenchmark("fizzbuzz", fizzbuzz_runner, iteration_count);
  benchmark::Initialize(&argc, argv);
  benchmark::RunSpecifiedBenchmarks();
}
