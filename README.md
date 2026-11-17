# Simple Calculator

A command-line calculator written in C++. The user enters two numbers and an operator, and the program shows the result. The user can calculate as many times as they want.

## Technology

- C++
- `switch`, `do...while` loop, `if/else`, `cin`/`cout`

## Features

- Addition, subtraction, multiplication and division
- Checks for division by zero
- Detects invalid operators
- Lets the user calculate again or exit

## How to Compile and Run

Make sure a C++ compiler such as g++ is installed.

bash
g++ calculator.cpp -o calculator
./calculator

Example

Enter first number: 10
Enter second number: 5
Enter the operation (+, -, *, /): *
Result: 10 * 5 = 50

1. Calculate again
2. Exit
Please enter your choice: 1
Enter first number: 8
Enter second number: 4
Enter the operation (+, -, *, /): *
Result: 8 * 4 = 32

1. Calculate again
2. Exit
Please enter your choice: 2
Good bye

## What I Learned

I learned how to use `switch` statements and `do...while` loops, and how to take input and print output in C++.

## Future Plans

- Add input validation for non-numeric input
- Add more operators
- Split the code into functions
