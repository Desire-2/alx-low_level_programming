#include "main.h"
/**
 * print_sign - function definition
 *
 * Description: a prgram that print the sign of a number
 * @n: parameter that accept character
 *
 * Return: 1 and prints + if n is greater than zero
 * and 0 an prints 0 if n zero and -1 and prints - if n
 * less that zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
