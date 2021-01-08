#ifndef FIZZBUZZ_H_
#define FIZZBUZZ_H_

#include <cstdint>
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

#endif
