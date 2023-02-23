#include "main.h"

/**
 * print_numbers - print from  0 - 9
 * Written by: Desire
 * Return: void
 */

void print_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
