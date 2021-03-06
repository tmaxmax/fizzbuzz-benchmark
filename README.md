# FizzBuzz C++, Rust and Go benchmark

The code in this repository implements simple benchmarks for FizzBuzz implementations in C++, Rust and Go

## Implementation of FizzBuzz

A function named `fizzbuzz` receives as parameter a 64-bit unsigned integer, and returns a string that contains "Fizz", if the number is divisible by 3, "Buzz", if by 5, or the number itself.

## Benchmarking methodology

The benchmarking framework runs the function with random integers as input multiple times, computing the time taken for the function to execute.

## Running the benchmarks

You need to have nightly rustc, make, cmake, go, and a C/C++ compiler with C++20 support installed on your machine to run the benchmarks.

To install nightly rustc (considering you have rustup installed):

```bash
$ rustup toolchain install nightly
```

To run the C++ benchmarks

```bash
$ make all # first run
$ # "make build" on code changes
$ make cxx
```

You can also choose the compiler for C++ by passing the required environment variables:

```bash
$ CC=clang CXX=clang++ make build
```

To run the Rust benchmark

```bash
$ make rs
```

To run the Go benchmark

```bash
$ make go
```
