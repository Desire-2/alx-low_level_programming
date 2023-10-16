* 0x18. C - Dynamic libraries - Readme
Project Information
Project Name: C - Dynamic libraries
Author: Julien Barbier
Project Weight: 1
Start Date: October 16, 2023, 6:00 AM
End Date: October 17, 2023, 6:00 AM
Checker Release Date: October 16, 2023, 12:00 PM
Table of Contents
Introduction
Resources
Learning Objectives
Requirements
* Tasks
** Introduction
This project focuses on the concept of dynamic libraries in the C programming language. You will learn how to create dynamic libraries, use them, understand the differences between static and shared libraries, and utilize various tools like nm, ldd, and ldconfig for working with dynamic libraries.

** Resources
Before starting this project, it is recommended to read or watch materials related to the following topics:

Difference between Dynamic and Static libraries (Static and Dynamic linking).
Creating dynamic libraries on Linux.
** Learning Objectives
By the end of this project, you are expected to be able to explain the following topics without external assistance:

** General
What is a dynamic library, how it works, how to create one, and how to use it.
Understanding the environment variable $LD_LIBRARY_PATH and how to use it.
Differentiating between static and shared libraries.
Basic usage of tools like nm, ldd, and ldconfig.
Copyright - Plagiarism
It is essential to note that you are responsible for coming up with solutions for the project's tasks yourself, as copying and pasting someone else's work is strictly forbidden and can result in removal from the program.

Requirements
C
Allowed editors: vi, vim, emacs.
All your C files will be compiled on Ubuntu 20.04 LTS using gcc with the options: -Wall -Werror -Wextra -pedantic -std=gnu89.
All your C files should end with a newline.
A README.md file at the root of the project folder is mandatory.
Your C code should follow the Betty style, which will be checked using betty-style.pl and betty-doc.pl.
You are not allowed to use global variables.
Each C file should have no more than 5 functions.
You are not allowed to use the standard library functions like printf, puts, etc. Instead, you are allowed to use _putchar.
You don't need to push _putchar.c as it will be provided.
Bash
Allowed editors: vi, vim, emacs.
All your bash scripts will be tested on Ubuntu 20.04 LTS.
All your bash files should end with a newline.
The first line of all your bash files should be #!/bin/bash.
A README.md file at the root of the project folder should describe what each script is doing.
All your bash files must be executable.
Tasks
Task 0: A library is not a luxury but one of the necessities of life
Create the dynamic library libdynamic.so containing the following functions:
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle)
** Task 1: Without libraries what have we? We have no past and no future
Create a script (1-create_dynamic_lib.sh) that generates a dynamic library called liball.so from all the .c files present in the current directory.
** Task 2: Let's call C functions from Python (Advanced)
Create a dynamic library 100-operations.so that contains C functions callable from Python. Example usage is provided.
** Task 3: Code injection: Win the Giga Millions! (Advanced)
Develop a shell script (101-make_me_win.sh) to potentially win the Giga Millions lottery by running two commands on the same server. The script must be no more than three lines long and use LD_PRELOAD. Your script should be run by a mole 98 seconds before the lottery program runs with specific numbers.
Please note that the provided code is for educational purposes only, and you should use it responsibly and in accordance with all relevant laws and regulations.
