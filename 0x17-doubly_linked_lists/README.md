0x17. C - Doubly linked lists
Description
This repository contains the solutions for the "0x17. C - Doubly linked lists" project as part of the ALX Low-Level Programming curriculum. The project focuses on working with doubly linked lists in the C programming language.

Project Tasks
Print list

Write a function that prints all the elements of a dlistint_t list.
Prototype: size_t print_dlistint(const dlistint_t *h);
Return: the number of nodes
Format: see example
List length

Write a function that returns the number of elements in a linked dlistint_t list.
Prototype: size_t dlistint_len(const dlistint_t *h);
Add node

Write a function that adds a new node at the beginning of a dlistint_t list.
Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
Add node at the end

Write a function that adds a new node at the end of a dlistint_t list.
Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
Free list

Write a function that frees a dlistint_t list.
Prototype: void free_dlistint(dlistint_t *head);
Get node at index

Write a function that returns the nth node of a dlistint_t linked list.
Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
Return NULL if the node does not exist.
Sum list

Write a function that returns the sum of all the data (n) of a dlistint_t linked list.
Prototype: int sum_dlistint(dlistint_t *head);
Return 0 if the list is empty.
Insert at index

Write a function that inserts a new node at a given position.
Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
Return NULL if it is not possible to add the new node at the specified index.
Delete at index

Write a function that deletes the node at a given index in a dlistint_t linked list.
Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
Return 1 if it succeeded, -1 if it failed.
Crackme4 (Advanced)

Find the password for crackme4 and save it in the file 100-password.
Palindromes (Advanced)

Find the largest palindrome made from the product of two 3-digit numbers and save it in the file 102-result.
Crackme5 (Advanced)

Write a keygen for crackme5 to generate a valid key for a given username.
Requirements
Allowed editors: vi, vim, emacs
All files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
All files should end with a new line
A README.md file, at the root of the project folder, is mandatory
Code must use the Betty style and will be checked using betty-style.pl and betty-doc.pl
Do not use global variables
Limit the number of functions in each file to no more than 5
The only C standard library functions allowed are malloc, free, printf, and exit
The prototypes of all functions should be included in the header file lists.h
All header files should be include guarded
Usage
To compile the C files, you can use the following commands:

bash
Copy code
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o 0-print_dlistint
For example, to compile the first task. Replace the source files and output filename as needed
