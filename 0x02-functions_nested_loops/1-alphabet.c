#include "main.h"
/**
 * print_alphabet - It's a function for prints alphabetic
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
