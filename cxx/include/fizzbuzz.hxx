#ifndef FIZZBUZZ_H_
#define FIZZBUZZ_H_

#include <cstdint>
#include <random>
#include <string>

auto fizzbuzz(std::uint64_t num) -> std::string {
  std::string res;

  if (num % 3 == 0) {
    res += "Fizz";
  }
  if (num % 5 == 0) {
    res += "Buzz";
  }
  if (res.empty()) {
    res += std::to_string(num);
  }

  return res;
}

auto gen() -> std::uint64_t {
  static std::mt19937_64 gen{std::random_device{}()};
  static std::uniform_int_distribution<std::uint64_t> dist;

  return dist(gen);
}

#endif
