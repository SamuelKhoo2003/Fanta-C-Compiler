# Fanta-C-Compiler

The **Fanta-C-Compiler** is a full-featured C-Compiler developed as part of my Year 2 coursework at Imperial College, with significant refinements made over the Summer of 2024.

## Project Overview

- **Completion Date:** March/April 2024
- **Scope:** Engineered a comprehensive C-Compiler from scratch, encompassing the entire compilation pipeline within a Dockerized environment.
- **Key Achievements:**
  - **100% Pass Rate:** Successfully passed all standard and custom test cases.
  - **Core C Features:** Supported key C language features, including pointers, arrays, and various data types.
  - **Advanced Optimizations:** Implemented optimizations such as register allocation and dead code elimination for efficient memory management and precise type checking.

## Features

<details>
  <summary>Compilation Pipeline</summary>

  - **Lexical Analysis:** Tokenizes C source code into meaningful symbols.
  - **Syntax Analysis:** Builds an abstract syntax tree (AST) from tokens.
  - **Semantic Analysis:** Ensures type correctness and resolves symbols.
  - **Optimization:** Includes optimizations like dead code elimination and register allocation.
  - **Code Generation:** Outputs assembly code for a target architecture.

</details>

<details>
  <summary>Core Language Features</summary>

  - **Data Types:** Supports all standard C data types including integers, floats, and pointers.
  - **Control Structures:** Implements if-else, loops, and switch statements.
  - **Memory Management:** Efficient handling of pointers and arrays.
  - **Function Calls:** Supports both recursive and non-recursive functions.

</details>

<details>
  <summary>Advanced Optimizations</summary>

  - **Register Allocation:** Allocates CPU registers efficiently to minimize memory access.
  - **Dead Code Elimination (In Progress):** Removes code that does not affect the program's output.
  - **Loop Unrolling (Planned):** Expands loops to reduce the overhead of control structures.

</details>

## Technologies Used

- **Programming Language:** C++, Python, Assembly
- **Tools:** Docker for containerization, GCC for testing, custom scripts for automation
- **Testing:** Over 100 custom test cases alongside standard test suites

## Installation and Setup

<details>
  <summary>Setup Instructions</summary>

  1. Clone the repository:
     ```bash
     git clone https://github.com/yourusername/fanta-c-compiler.git
     ```
  2. Navigate to the project directory:
     ```bash
     cd fanta-c-compiler
     ```
  3. Build the Docker container:
     ```bash
     docker build -t fanta-c-compiler .
     ```
  4. Run the compiler within Docker:
     ```bash
     docker run -v $(pwd)/src:/app/src fanta-c-compiler
     ```

</details>

## Important Note

This project was created as part of my coursework and is intended for educational purposes only. **Please do not directly copy this work.** Use it as inspiration or reference, but make sure to develop your own understanding and code.


