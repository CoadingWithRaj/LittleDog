# LittleDog
Here’s how you can convert the provided text into a GitHub README.md file. The README will explain the project, its goals, and how to use it.

---

# Sorting a List of Lines in C++

This project implements a modular C++ program that reads lines from a file, sorts them using an insertion sort algorithm with a linear linked list, and prints the sorted list. The program demonstrates the use of command-line arguments, file handling, and linked lists in C++.

## Project Goals

1. **Modular Program Design**: Organize the program into modular components using C++.
2. **File Handling**: Read a file (`p3Meow.txt`) line by line using command-line arguments.
3. **End-of-File Handling**: Properly handle the end of the file.
4. **C++ Strings**: Use C++ strings and string operators.
5. **Linked List**: Implement and use a linear linked list.
6. **Insertion Sort**: Implement an insertion sort algorithm to sort the lines.

## Project Description

The program performs the following tasks:

1. **Banner and Bye Functions**: Call `banner()` at the start and `bye()` at the end of the program.
2. **List Class**: Instantiate a `List` class to manage the linked list.
3. **File Reading**: Open and read the file specified by the command-line argument. Handle end-of-file (EOF) correctly. If there are any issues, call `fatal()`.
4. **Insertion Sort**: Use the `List::insert()` function to insert each line into the linked list, performing an insertion sort.
5. **Print Sorted List**: After reading the file, print the sorted list. The sorting is based on the entire line, not just a single letter or word.
6. **Cleanup**: Call `bye()` before exiting the program.

## List and Cell Classes

The `List` and `Cell` classes are tightly coupled. The `Cell` class is nested within the private section of the `List` class, but all members of `Cell` are public to allow access by `List`.

### List Class

- **Private Members**:
  - `head`: Pointer to the head of the linked list.
  - `prior` and `scan`: Pointers used for traversing the list.
  - `find()`: A helper function to position the `prior` and `scan` pointers for insertion.

- **Public Members**:
  - Constructor and destructor.
  - `insert()`: Inserts a new line into the linked list in sorted order.
  - `print()`: Prints the sorted list.

### Cell Class

- **Public Members**:
  - `data`: Stores the line of text.
  - `next`: Pointer to the next cell in the list.
  - Constructor and destructor.

## How It Works

1. **File Input**: The program reads lines from the input file (`p3Meow.txt`) specified via a command-line argument.
2. **Insertion Sort**: Each line is inserted into the linked list in sorted order using the `insert()` function.
3. **Sorting Logic**: The `find()` function positions the `prior` and `scan` pointers to determine where the new line should be inserted.
4. **Output**: After all lines are inserted, the program prints the sorted list.

## Code Structure

- **List.h**: Header file containing the `List` and `Cell` class declarations.
- **List.cpp**: Implementation file for the `List` class.
- **main.cpp**: Main program that handles file input, calls the `List` functions, and prints the sorted list.

## Usage

1. The program will output the sorted list of lines.

## Dependencies

- C++ Compiler (e.g., `g++`)

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

This README provides a clear overview of the project, its goals, and how to use it. You can customize it further based on your specific requirements.
