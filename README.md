# C++ Module 08 - STL:Template Containers, Iterators, Algorithms

## 🔍 Overview
This module focuses on the Standard Template Library (STL) in C++, specifically templated containers, iterators, and algorithms. It consists of three exercises that progressively build understanding of STL concepts through practical implementation.

## 📝Exercises
### Exercise 00: Easy find
- Implementation of a templated function `easyfind` that finds the first occurrence of an integer in a container
- Works with various STL containers like vectors, lists, and deques
- Handles error cases when the value is not found
### Execise 01: Span
- Custom `Span` class that can store a maximum of N integers
- Implementation of methods to add numbers individually or in ranges
- Functions to find the shortest and longest span (difference) between stored numbers
- Exception handling for cases like adding beyond capacity
### Exercise 02: MutantStack
- Extension of the `std::stack` container to add iterator capabilities
- Implementation of all four iterator types:
    - Regular iterators (read/write, forward)
    - Const iterators (read-only, forward)
    - Reverse iterators (read/write, backward)
    - Const reverse iterators (read-only, backward)
- Maintains all original stack functionality while adding iteration

## ✍️Key Concepts Demonstrated:
1. Template Programming
- Template class and function implementations
- Template specialization
- Working with template parameters
2. STL Containers
- Using various STL containers (vector, list, deque, stack)
- Implementing custom containers
- Container adapters
3. Iterators
- Iterator design and implementation
- Iterator categories and capabilities
- Using iterators with algorithms
4. STL Algorithms
- Using built-in algorithms like `std::find`
- Implementing custom algorithms
- Algorithm complexity and performance
5. Object-Oriented Design
- Class inheritance (MutantStack inheriting from std::stack)
- Encapsulation and data hiding
- Exception handling and safety
## 📐Compilation and Usage
```sh
# Compile with:
make

# Run individual exercises:
./easyfind
./span
./mutantstack
```
## Requirements
- C++98 Standard
- Compiled with: c++ -Wall -Wextra -Werror -std=c++98
## 🧠Learning Outcomes
Through this module, you'll gain:

- Deep understanding of the STL and its components
- Experience with template programming
- Knowledge of iterator patterns and implementations
- Practical skills in extending existing STL containers
- Understanding of algorithm complexity and container performance
## 🗒️Notes
- All code follows the CPP98 standard
- No memory leaks in any implementation
- Full error handling through exceptions
- Orthodox Canonical Form maintained in all classes

## 👥 Author
[**Tudor Ursescu**](https://github.com/Tudor-Ursescu)
## 📜 License
This is an open-source project, and you are free to use, modify, and distribute it as you see fit.