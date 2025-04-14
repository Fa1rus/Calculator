# Simple Calculator

A command-line calculator program written in C that performs basic arithmetic operations and keeps a history of calculations.

## Features

- Basic arithmetic operations:
  - Addition (+)
  - Subtraction (-)
  - Multiplication (*)
  - Division (/)
- Calculation history storage
- Simple menu-driven interface

## How to Use

1. Compile the program:
   ```
   gcc -o calculator main.c -lm
   ```

2. Run the executable:
   ```
   ./calculator
   ```

3. Use the menu to select operations:
   - Choose options 1-4 for arithmetic operations
   - Choose option 5 to view calculation history
   - Choose 0 to exit the program

## Implementation Details

The calculator uses simple C functions to implement arithmetic operations:
- `add()` - Adds two numbers
- `subtract()` - Subtracts the second number from the first
- `multiply()` - Multiplies two numbers
- `divide()` - Divides the first number by the second

The history feature stores up to 100 calculations in memory during the program's execution.

### History Feature Explained

#### 1. `char history[100][100];`
This line makes a **2D array of characters** (aka strings).

- Think of it like a **notebook** 📓 with 100 pages (`[100]`)
- Each page (line) can hold up to 100 characters (`[100]`)

We use this to **store text like** `"5.00 + 3.00 = 8.00"`

#### 2. `int count = 0;`
This variable **tracks how many calculations** you've done.

- Starts at 0
- Every time you calculate something, we store it in `history[count]`, then do `count++` to move to the next slot

#### 3. `sprintf(history[count++], "...", x, y, result);`
This line:
- **Formats the string** (like `printf` but into a variable)
- Stores it in `history[]`

Example:
```c
sprintf(history[count++], "%.2f + %.2f = %.2f", x, y, result);
```
means:
👉 `"5.00 + 3.00 = 8.00"` will be saved to `history[0]`, then `count` becomes 1 for the next entry.

## Future Improvements

- Save calculation history to a file
- Add more advanced operations (square root, power, etc.)
- Implement error handling for invalid inputs
