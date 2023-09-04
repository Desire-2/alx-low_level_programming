0x15. C - File I/O
Author: Julien Barbier
Weight: 1
Project Start Date: Sep 4, 2023 6:00 AM
Project End Date: Sep 5, 2023 6:00 AM
Checker Release Date: Sep 4, 2023 12:00 PM
Auto Review Deadline: The deadline will be set automatically.

Resources
Read or watch:

File descriptors
C Programming in Linux Tutorial #024 - open() read() write() Functions
Man or help:

open
close
read
write
dprintf
Learning Objectives
By the end of this project, you should be able to explain the following topics without the help of Google:

General
How to look for the right source of information online.
How to create, open, close, read, and write files.
What are file descriptors.
What are the three standard file descriptors, their purposes, and their POSIX names.
How to use the I/O system calls open, close, read, and write.
What are and how to use the flags O_RDONLY, O_WRONLY, and O_RDWR.
What are file permissions, and how to set them when creating a file with the open system call.
What is a system call.
The difference between a function and a system call.
Copyright - Plagiarism
You must come up with solutions for the tasks to meet the learning objectives.
Do not copy and paste someone else's work.
Do not publish any content of this project.
Plagiarism is strictly forbidden and will result in removal from the program.
Requirements
General
Allowed editors: vi, vim, emacs.
All your files will be compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89.
All your files should end with a new line.
A README.md file, at the root of the project folder, is mandatory.
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
You are not allowed to use global variables.
No more than 5 functions per file.
The only C standard library functions allowed are malloc, free, and exit. Any use of functions like printf, puts, calloc, realloc, etc., is forbidden.
Allowed syscalls: read, write, open, close.
You are allowed to use _putchar.
You don’t have to push _putchar.c; we will use our file. If you do, it won’t be taken into account.
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h.
Don’t forget to push your header file.
All your header files should be include guarded.
Always prefer using symbolic constants (POSIX) vs numbers when it makes sense (e.g., read(STDIN_FILENO, ...) instead of read(0, ...).
Tasks
0. Tread lightly, she is near (mandatory)
Write a function that reads a text file and prints it to the POSIX standard output.

Prototype: ssize_t read_textfile(const char *filename, size_t letters);

filename is the name of the file to read.
letters is the number of letters it should read and print.
Returns the actual number of letters it could read and print.
If the file cannot be opened or read, return 0.
If filename is NULL, return 0.
If write fails or does not write the expected amount of bytes, return 0.
1. Under the snow (mandatory)
Create a function that creates a file.

Prototype: int create_file(const char *filename, char *text_content);

filename is the name of the file to create.
text_content is a NULL-terminated string to write to the file.
Returns: 1 on success, -1 on failure (file cannot be created, file cannot be written, write "fails," etc.).
The created file must have permissions: rw-------. If the file already exists, do not change the permissions.
If the file already exists, truncate it.
If filename is NULL, return -1.
If text_content is NULL, create an empty file.
2. Speak gently, she can hear (mandatory)
Write a function that appends text at the end of a file.

Prototype: int append_text_to_file(const char *filename, char *text_content);

filename is the name of the file.
text_content is the NULL-terminated string to add at the end of the file.
Returns: 1 on success and -1 on failure.
Do not create the file if it does not exist.
If filename is NULL, return -1.
If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file.
3. cp (mandatory)
Write a program that copies the content of one file to another.

Usage: cp file_from file_to

If the number of arguments is not correct, exit with code 97 and print Usage: cp file_from file_to, followed by a new line, on the POSIX standard error.
If file_to already exists, truncate it.
If file_from does not exist or if you cannot read it, exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error, where NAME_OF_THE_FILE is the first argument passed to your program.
If you cannot create or if writing to file_to fails, exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error, where NAME_OF_THE_FILE is the second argument passed to your program.
If you cannot close a file descriptor, exit with code 100 and print Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error, where FD_VALUE is the value of the file descriptor.
Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions.
You must read 1,024 bytes at a time from file_from to make fewer system calls. Use a buffer.
You are allowed to use dprintf.
4. elf (advanced)
Write a program that displays the information contained in the ELF header at the start of an ELF file.

Usage: elf_header elf_filename

Displayed information:
Magic
Class
Data
Version
OS/ABI
ABI Version
Type
Entry point address
Format: the same as readelf -h (version 2.26.1)
If the file is not an ELF file or on error, exit with status code 98 and display a comprehensive error message to stderr.
You are allowed to use lseek once.
You are allowed to use read a maximum of 2 times at runtime.
You are allowed to have as many functions as you want in your source file.
You are allowed to use printf.
Refer to man elf and readelf for further information.
