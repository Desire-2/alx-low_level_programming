0x15. C - File I/O
This repository contains solutions for the tasks in the "0x15. C - File I/O" project, which is part of the low-level programming curriculum at ALX School. The project focuses on file input/output operations and working with file descriptors in the C programming language.

Learning Objectives
By the end of this project, you are expected to be able to:

Look for the right source of information online
Create, open, close, read, and write files in C
Understand file descriptors and their usage
Know the purpose and POSIX names of the 3 standard file descriptors (stdin, stdout, stderr)
Use the I/O system calls such as open, close, read, and write
Understand and use flags like O_RDONLY, O_WRONLY, and O_RDWR
Set file permissions when creating a file with the open system call
Differentiate between a function and a system call
Display the information contained in the ELF header of an ELF file
Requirements
Allowed editors: vi, vim, emacs
All files will be compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89
All files should end with a new line
A README.md file, at the root of the project folder, is mandatory
Code should follow the Betty style and pass the Betty linter
Usage of global variables is not allowed
The only C standard library functions allowed are malloc, free, and exit
Allowed system calls: read, write, open, close
The prototypes of all functions and the prototype of the _putchar function should be included in a header file named main.h
All header files should be include guarded
Each function should not exceed 40 lines of code
Each file should contain no more than 5 functions
You are allowed to use the _putchar function provided by ALX
List of Tasks
Task 0: Tread lightly, she is near
Write a function that reads a text file and prints its contents to the POSIX standard output.

Prototype: ssize_t read_textfile(const char *filename, size_t letters);
Task 1: Under the snow
Write a function that creates a file.

Prototype: int create_file(const char *filename, char *text_content);
Task 2: Speak gently, she can hear
Write a function that appends text at the end of a file.

Prototype: int append_text_to_file(const char *filename, char *text_content);
Task 3: cp
Write a program that copies the content of one file to another file.

Usage: cp file_from file_to
Task 4: elf
Write a program that displays the information contained in the ELF header at the start of an ELF file.

Usage: elf_header elf_filename
Quiz Questions
The project also includes quiz questions to reinforce the understanding of file I/O concepts. The questions cover topics such as file descriptors, system calls, flags for file operations, and the difference between functions and system calls.

Author
This project is written and maintained by Julien Barbier.
