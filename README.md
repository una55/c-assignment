
# C Programming Assignment

This repository contains a collection of beginner-level C programs that perform various mathematical and logical operations. Each program is self-contained and demonstrates fundamental concepts such as input/output, conditional statements, loops, and arithmetic operations.

## Contents

| File Name                | Description                                                  |
|--------------------------|--------------------------------------------------------------|
| comparing3numbers.c      | Compares three numbers and prints the largest[1].            |
| expression-evalvation.c  | Evaluates two mathematical expressions based on user input[2].|
| factorial.c              | Calculates the factorial of a given number[3].               |
| feet2cm.c                | Converts a value from feet to centimeters[4].                |
| odd-even.c               | Checks whether a number is odd or even[5].                   |
| quadratic-solver.c       | Solves a quadratic equation and prints the roots[8].         |
| rectangle-area.c         | Calculates the area of a rectangle or square[9].             |

## How to Compile and Run

Each program can be compiled and run individually using a C compiler such as `gcc`. Below are the general steps:

1. Compile the program:
   ```bash
   gcc filename.c -o outputname
   ```
2. Run the executable:
   ```bash
   ./outputname
   ```

Replace `filename.c` with the desired source file and `outputname` with your preferred executable name.

## Program Descriptions

- comparing3numbers.c
  Prompts the user to enter three numbers and displays the largest among them[1].

- expression-evalvation.c
  Asks for two numbers, evaluates $$(x + y) \times (x - y)$$, and if $$x \neq y$$, also computes $$\frac{x + y}{x - y}$$[2].

- factorial.c
  Calculates and prints the factorial of a user-provided integer[3].

- feet2cm.c
  Converts a length from feet to centimeters using the conversion factor $$1 \text{ foot} = 30.48 \text{ cm}$$[4].

- odd-even.c  
  Determines if the entered integer is odd or even and displays the result[5].

- quadratic-solver.c
  Solves a quadratic equation of the form $$ax^2 + bx + c = 0$$ and prints the real roots if they exist; otherwise, notifies if the roots are complex[8].

- rectangle-area.c
  Calculates the area of a rectangle (or square) based on user-provided length and width[9].

## Notes

- All programs use standard input/output functions.
- Ensure you have a C compiler installed (such as GCC).
- For any issues or suggestions, feel free to open an issue or submit a pull request.

---

Author:
Mohd. Unass

Date:
May 27, 2025
