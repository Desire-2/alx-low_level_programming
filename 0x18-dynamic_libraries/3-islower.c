#include "main.h"
#include <ctype.h>
/**
 * _islower - function definition
 * @ch: parameter that accept character
 *
 * Description: A program that check for lowercase character
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int ch)
{
	if (islower(ch))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
