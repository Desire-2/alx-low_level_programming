#include "main.h"
/**
 * print_alphabet_x10 - function definition
 *
 * Description: A program that print alphabet 10x
 *
 * By Desire
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');

		i++;
	}
}
