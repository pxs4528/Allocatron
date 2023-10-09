# Allocatron

![License](https://img.shields.io/badge/license-MIT-blue.svg)

**Allocatron** is a memory management library implemented in C. It provides memory allocation and deallocation functions similar to `malloc` and `free`, with support for different allocation strategies such as First Fit (FF), Next Fit (NF), Best Fit (BF), and Worst Fit (WF).

## Table of Contents

- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Building](#building)
- [Usage](#usage)
- [Memory Allocation Strategies](#memory-allocation-strategies)
- [Contributing](#contributing)
- [License](#license)

## Features

- Custom memory allocation functions (`malloc`, `free`, `calloc`, `realloc`)
- Support for different allocation strategies (First Fit, Next Fit, Best Fit, Worst Fit)
- Memory statistics tracking (mallocs, frees, reuses, grows, splits, coalesces, blocks, requested, max heap)
- Easy integration into C projects

## Getting Started

### Prerequisites

To build and use the **Allocatron**, you need:

- GCC (GNU Compiler Collection)
- Unix-like operating system (Linux preferred)

### Building

Clone the repository and navigate to the project directory:

```bash
git clone https://github.com/pxs4528/malloc
```

Compile the memory allocator libraries using the provided Makefile:

```bash
make
```

## Usage

To use the custom memory allocator in your C project, follow these steps:

1. Include the appropriate library in your source code:

   - `lib/libmalloc-ff.so` for First Fit
   - `lib/libmalloc-nf.so` for Next Fit
   - `lib/libmalloc-bf.so` for Best Fit
   - `lib/libmalloc-wf.so` for Worst Fit

2. Use the custom memory allocation functions (`malloc`, `free`, `calloc`, `realloc`) in your code as you would with the standard C library.

3. Compile your project by specifying the library and include paths, for example:

   ```bash
   $ env LD_PRELOAD=lib/libmalloc-ff.so tests/ffnf
   ```

4. Run your program, and the custom memory allocator will manage memory allocation and deallocation based on the selected strategy.

## Memory Allocation Strategies

The custom memory allocator supports various allocation strategies, which you can choose by linking with the appropriate library:

- **First Fit (FF)**: `libmalloc-ff.so`
- **Next Fit (NF)**: `libmalloc-nf.so`
- **Best Fit (BF)**: `libmalloc-bf.so`
- **Worst Fit (WF)**: `libmalloc-wf.so`

You can switch between strategies by selecting the corresponding library during compilation.

## Contributing

Contributions to this project are welcome! If you find a bug, have an improvement in mind, or want to add new features, please open an issue or create a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

**Allocatron** is developed and maintained by [Parth Sharma](https://github.com/pxs4528).
