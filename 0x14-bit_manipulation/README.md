# 0x14. C - Bit Manipulation 
This repository contains solutions for various tasks related to bit manipulation in the C programming language.

# Learning Objectives 
By completing this project, you are expected to achieve the following learning objectives:

Ability to look for the right sources of information without excessive reliance on external help. Understanding of how to manipulate bits and use bitwise operators. Requirements Allowed editors: vi, vim, emacs All files will be compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89 All files should end with a new line. A README.md file is included at the root of the project folder. Code should follow the Betty style. Usage of global variables is not allowed. Each file should contain no more than 5 functions. The only C standard library functions allowed are malloc, free, and exit. Functions like printf, puts, calloc, realloc, etc., are forbidden. Usage of _putchar is allowed. The main.c files provided in the examples are for testing purposes only and will not be considered during evaluation. The evaluation will use custom main.c files. All function prototypes and the prototype for _putchar should be included in the header file main.h. The header files should be include guarded. Project Tasks 0. 0-binary_to_uint.c Write a function that converts a binary number to an unsigned int.

# Prototype: unsigned int binary_to_uint(const char *b); 
The parameter b is a pointer to a string of 0 and 1 characters. The function should return the converted number as an unsigned int. If the string b is NULL or contains characters other than 0 or 1, the function should return 0.

# 1-print_binary.c 
Write a function that prints the binary representation of a number.
Prototype: void print_binary(unsigned long int n); The parameter n is the number to be printed in binary format. The function should print the binary representation of n, without using arrays, malloc, or % or / operators. 2. 2-get_bit.c Write a function that returns the value of a bit at a given index.

# Prototype: int get_bit(unsigned long int n, unsigned int index); 
The parameter n is the number to evaluate. The parameter index is the index of the bit to return, starting from 0. The function should return the value of the bit at the given index or -1 if an error occurred. 3. 3-set_bit.c Write a function that sets the value of a bit to 1 at a given index.

# Prototype: int set_bit(unsigned long int *n, unsigned int index);
The parameter n is a pointer to the number to modify. The parameter index is the index of the bit to set, starting from 0. The function should return 1 if it succeeded, or -1 if an error occurred. 4. 4-clear_bit.c Write a function that sets the value of a bit to 0 at a given index.

# Prototype: int clear_bit(unsigned long int *n, unsigned int index);
The parameter n is a pointer to the number to modify. The parameter index is the index of the bit to clear, starting from 0. The function should return 1 if it succeeded, or -1 if an error occurred. 5. 5-flip_bits.c Write a function that returns the number of bits you would need to flip to get from one number to another.

# Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
The parameters n and m are the numbers to compare. The function should return the number of bits needed to flip. 6. 100-get_endianness.c Write a function that checks the endianness of the system.

# Prototype: int get_endianness(void);
The function should return 0 if the system is big endian or 1 if it is little endian.
# 101-password 
Find the password for a given program.

The password should be saved in a file named 101-password. The file should contain the exact password without any new lines or extra spaces.
