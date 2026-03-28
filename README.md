<h1 align="center">CPP_42</h1>

<p align="center">
  My 42 C++ modules repository, from Module_00 to Module_09.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/School-42-black?style=for-the-badge" alt="42 badge" />
  <img src="https://img.shields.io/badge/Language-C%2B%2B98-blue?style=for-the-badge" alt="Language badge" />
  <img src="https://img.shields.io/badge/Status-In_Progress-orange?style=for-the-badge" alt="Status badge" />
</p>

<p align="center">
  <strong>C++98, OOP, inheritance, polymorphism, templates, STL, 42 curriculum</strong>
</p>

---

## Overview

`CPP_42` is a repository developed as part of the 42 curriculum.

This repository groups the exercises available under `Module_00` to `Module_09`. Each exercise is an independent mini-project with its own `Makefile`, its own executable, and its own `include/` and `src/` folders.

This repository focuses on:
- learning the C++98 toolchain and compilation rules
- building classes and object-oriented abstractions
- practicing inheritance, polymorphism, exceptions, and templates
- working with STL containers and algorithmic exercises

---

## Features

- 10 modules organized from `Module_00` to `Module_09`
- 34 exercise folders (`ex00` to `ex05` depending on the module)
- a dedicated `Makefile` in every exercise directory
- a progression from simple CLI programs to generic and STL-based exercises
- helper targets such as `run`, `help`, `valgrind`, and sometimes `leaks` in many Makefiles
- no root `Makefile`: each exercise must be compiled independently

---

## Concepts Covered

Through this repository, I worked on the following concepts:

- classes, encapsulation, and member functions
- pointers, references, and dynamic allocation
- operator overloading and canonical class structure
- inheritance, polymorphism, abstract classes, and interfaces
- exceptions, conversions, serialization, and type identification
- templates, iterators, containers, and STL-oriented problem solving

---

## Build

Clone the repository and compile the exercise you want to work on:

```bash
git clone git@github.com:Middle-555/CPP_42.git
cd CPP_42/Module_00/ex00
make
```

Available Makefile rules in every exercise:

```bash
make
make clean
make fclean
make re
```

Additional notes:
- all 34 exercise Makefiles compile with `-Wall -Wextra -Werror -std=c++98`
- many exercises also provide `make run`, `make help`, and `make valgrind`
- several later exercises also provide `make leaks` on macOS

---

## Usage

Run the executable from the corresponding exercise directory.

### Examples

```bash
cd Module_00/ex00 && ./Megaphone "hello" "42"
cd Module_00/ex01 && ./Phonebook
cd Module_09/ex02 && ./PmergeMe 3 5 9 7 4
```

Usage notes:
- some programs are interactive, such as `Phonebook`
- some programs expect arguments or input files, depending on the exercise
- executable names change from one exercise to another, so check the local `Makefile`

---

## Project Structure

```text
.
├── Module_00/
│   ├── ex00/
│   └── ex01/
├── Module_01/
│   ├── ex00/
│   ├── ex01/
│   ├── ex02/
│   ├── ex03/
│   ├── ex04/
│   └── ex05/
├── Module_02/
│   ├── ex00/
│   ├── ex01/
│   └── ex02/
├── Module_03/
│   ├── ex00/
│   ├── ex01/
│   └── ex02/
├── Module_04/
│   ├── ex00/
│   ├── ex01/
│   ├── ex02/
│   └── ex03/
├── Module_05/
│   ├── ex00/
│   ├── ex01/
│   ├── ex02/
│   └── ex03/
├── Module_06/
│   ├── ex00/
│   ├── ex01/
│   └── ex02/
├── Module_07/
│   ├── ex00/
│   ├── ex01/
│   └── ex02/
├── Module_08/
│   ├── ex00/
│   ├── ex01/
│   └── ex02/
├── Module_09/
│   ├── ex00/
│   ├── ex01/
│   └── ex02/
├── template.md
└── README.md
```

### Structure Details

- `Module_00/`: first CLI exercises with `Megaphone` and `Phonebook`
- `Module_01/`: memory, references, small utility classes, file replacement, and dispatching
- `Module_02/`: `Fixed` class exercises and operator-related work
- `Module_03/`: inheritance through the `ClapTrap`, `ScavTrap`, and `FragTrap` hierarchy
- `Module_04/`: polymorphism, abstract classes, deep copy work, and the Materia system
- `Module_05/`: exception-oriented exercises with `Bureaucrat`, forms, and an `Intern`
- `Module_06/`: scalar conversion, serialization, and runtime type identification
- `Module_07/`: generic programming with templates, `iter`, and a templated `Array`
- `Module_08/`: STL helper exercises such as `EasyFind`, `Span`, and `MutantStack`
- `Module_09/`: practical STL exercises with `BitcoinExchange`, `RPN`, and `PmergeMe`

---

## Project Constraints

This repository follows constraints that are visible in the current project files:
- written in C++
- compiled in C++98 mode
- one independent `Makefile` per exercise
- strict warning flags enabled: `-Wall -Wextra -Werror`
- organized as a set of small, focused exercises rather than one single application

---

## Testing

Each exercise can be checked locally with the same general workflow:
- compile the target exercise with `make`
- run the executable manually with the expected arguments
- use `make valgrind` when the target exists
- use `make leaks` on macOS when the target exists
- compare the observed output with the expected exercise behavior

### Manual test examples

```bash
cd Module_00/ex00 && make && ./Megaphone "hello" "42"
cd Module_00/ex01 && make && ./Phonebook
cd Module_09/ex02 && make && ./PmergeMe 3 5 9 7 4
```

### Memory checks

```bash
cd Module_09/ex02 && make valgrind
```

Testing note:
- there is no single root test command for the whole repository because every exercise is independent

---

## What I Learned

This repository helped me improve in the following areas:
- structuring small C++ projects with headers, sources, and Makefiles
- moving from basic classes to more advanced OOP patterns
- reasoning about object lifetime, copying, and resource ownership
- using templates and STL containers to solve generic problems

---

## Possible Improvements

Although the repository already provides a clear learning path, several improvements could be considered:
- add a root script to build all exercises automatically
- add a short subject summary for each module
- add CI to compile the exercises automatically on push
- add dedicated regression tests for the most complex exercises

---

## Author

Middle  
42 student

<p>
  <a href="https://github.com/Middle-555">GitHub</a>
</p>
