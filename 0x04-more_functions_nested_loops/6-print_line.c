#include "main.h"

/**
 * print_line - prints straight  a line
 * @n: variable
 * Written by: Desire
 * Return: 0
 */

void print_line(int n)
{
	int e = 0;

	while (e < n && n > 0)
	{
		_putchar('_');
		
		e++;
	}
	_putchar('\n');
}
