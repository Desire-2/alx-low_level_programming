#include"main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 * Written by Desire
 * Return: Nothing
*/

void print_rev(char *s)
{
	int index;

	/* 1st lets finds the length of string without null character*/
	for (index = 0; s[index] != '\0'; ++index)
		;

	/* then print char from the last index as you decrement*/
	for (--index; index >= 0; --index)
		_putchar(s[index]);
	_putchar('\n');
}
