#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - Function definition
 *
 * Description: a program that prints the last digit of number
 * @ch: parameter
 *
 * Return: whole the values of the last digit
 */
int print_last_digit(int ch)
{
	int result;

	if (ch >= 0)
	{
		result = ch % 10;
	}
	else
	{
		result = abs(ch % 10);
	}
	_putchar(result + '0');
	return (result);
}
