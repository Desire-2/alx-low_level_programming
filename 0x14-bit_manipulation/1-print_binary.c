#include "main.h"
/**
 *  print_binary - prints the binary representation of a number.
 *  @n: ..........
 *  Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
		{
			print_binary(n >> 1);
			_putchar((n & 1) + '0');
		}
	}
	else
	{
		_putchar('0');
	}
}
/**
 * main - main call
 * Return: ......
 */
int main(void)
{
	print_binary(0);
	_putchar('\n');

	print_binary(1);
	_putchar('\n');

	print_binary(98);
	_putchar('\n');

	print_binary(1024);
	_putchar('\n');

	print_binary(1025);
	_putchar('\n');

	return (0);
}

