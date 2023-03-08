#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: string to be returned
 * Return: strlen_rev_recursion
 */

void _print_rev_recursion(char *s);
{
	if (*s == '\0')
		return (0);

	else
		return (1 + _strlen_rev_recursion(s + 1));
}
