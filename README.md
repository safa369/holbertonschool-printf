Description

PRINTF()

This repository contains C program for my own _printf function written as project of holberton School.
This function returns the count of printed characters when the function is succeed and -1 if it failed.
The options of the function are:

- *%c: Prints a single character.
- *%s: Prints a string.
- %d: Prints integers.
- %i: Prints integers.

Authorized functions and macros:
- write (man 2 write).
- malloc (man 3 malloc).
- free (man 3 free).
- va_start (man 3 va_start).
- va_end (man 3 va_end).
- va_copy (man 3 va_copy).
- va_arg (man 3 va_arg).

Compilation:
- This code will be compiled this way:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

Function prototypes
All function prototypes used to compile _printf() are included in the header file "main.h" (contains the prototypes of the functions used that can be found in the other files):

- int _printf(const char *format, ...): Contains the _printf function.
- int _putchar(char c): contains the putchar function.
- int print_string(va_list p):contains the function that allow printing a string (%s). 
- int print_char(va_list p): contains the function that allow printing a char (%c).
- int print_integer(va_list argmt): contains the function that allow printing an integer (%d, %i).
- int get_function(const char c): contains the function that selects the correct function requested by user.