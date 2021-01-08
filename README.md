# FizzBuzz C++ and Rust benchmark

The code in this repository implements simple benchmarks for FizzBuzz implementations in C++ and Rust

## Implementation of FizzBuzz

A function named `fizzbuzz` receives as parameter a 64-bit unsigned integer, and returns a string that contains "Fizz", if the number is divisible by 3, "Buzz", if by 5, or the number itself.

## Benchmarking methodology

The benchmarking framework runs the function with a random integer as input multiple times, computing the time taken for the function's execution.

## Running the benchmarks

You need to have rustup, cmake, and a C/C++ compiler installed on your machine to run the benchmarks.

To run the C++ benchmarks

```bash
$ make all # first run
$ # make build on code changes
$ make cxx
```

You can also choose the compiler for C++ by passing the required environment variable:

```bash
$ CC=clang CXX=clang++ make build
```

To run the Rust benchmark (make sure to have Rust Nightly installed)

```bash
$ make rs
```
