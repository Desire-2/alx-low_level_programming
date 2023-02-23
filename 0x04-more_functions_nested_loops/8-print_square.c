#include "main.h"

/**
 * print_square - Where size is the size of the square
 * @n: number of _ to be printed
 * Written by:desire
 * Return: void
 */

void print_square(int n)
{
	int a = 0, aa;

	while (a < n && n > 0)
	{
		aa = 0;
		while (aa < n)
		{
			_putchar('#');
			aa++;
		}
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}
