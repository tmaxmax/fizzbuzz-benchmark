#ifndef FIZZBUZZ_H_
#define FIZZBUZZ_H_

#include <cstdint>
#include <string>

auto fizzbuzz(int num) -> std::string {
  static const std::string fizz{"fizz"}, buzz{"buzz"};

  std::string res;

  if (num % 3 == 0) {
    res += fizz;
  }
  if (num % 5 == 0) {
    res += buzz;
  }
  if (res.empty()) {
    res += std::to_string(num);
  }

  return res;
}

#endif
