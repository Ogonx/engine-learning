# engine-learning

[![CI](https://github.com/Ogonx/engine-learning/actions/workflows/ci.yml/badge.svg)](https://github.com/Ogonx/engine-learning/actions/workflows/ci.yml)

A small C++ project where I'm learning engine programming. It has a tiny library (`mathlib`), a hello program that uses it, and Catch2 tests. GitHub Actions builds and tests it on Linux on every push.

## Build

```
cmake -S . -B build
cmake --build build --config Debug
```

## Run

On Windows:

```
.\build\Debug\hello.exe
.\build\Debug\tests.exe
```

On Linux:

```
./build/hello
./build/tests
```