# Customer Number Validation Project

## Overview

This project provides a simple C++ program that validates customer numbers based on a specific format. The customer number format must follow these rules:
- The customer number consists of *6 characters*.
- The first *2 characters* must be *alphabetic* (A-Z or a-z).
- The last *4 characters* must be *numeric* (0-9).

The program reads a customer number input from the user and determines whether it follows the correct format.

## Objectives
- Implement a validation function to check if the customer number meets the specified format.
- Create separate functions for checking if a string is alphabetic and numeric.
- Organize the code into header and source files for better modularity.
- Provide a user-friendly interface to input and validate customer numbers.

### Features
- *Alphabetic Check*: Ensures that the first two characters of the customer number are alphabetic.
- *Numeric Check*: Ensures that the last four characters are digits.
- *Validation Logic*: Combines both checks to determine if the customer number is valid.

### Code Organization
The code is organized into three main files:
- **validation.hpp**: This header file declares the functions that handle the alphabetic check, numeric check, and customer number validation.
- **validation.cpp**: This source file implements the functions declared in the header file.
- **main.cpp**: This file contains the main function, which handles user input and calls the validation functions.

### Functions
- **isAlphabetic(const std::string& str)**: Checks if all characters in the string are alphabetic (A-Z or a-z).
- **isNumeric(const std::string& str)**: Checks if all characters in the string are numeric (0-9).
- **validateCustomerNumber(const std::string& customerNumber)**: Validates that the customer number follows the correct format.

### Screenshots


![Validation1](https://github.com/user-attachments/assets/dc4b0ae3-9903-4348-abda-fc8e919c942a)

![Validation](https://github.com/user-attachments/assets/6a095704-5d80-4279-a233-5bb916da3805)

### Author 
- **Kailash Paudel**
- **10897677.cc.peralta.edu**






