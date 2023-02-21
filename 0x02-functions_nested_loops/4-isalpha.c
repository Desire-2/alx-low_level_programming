#include "main.h"
#include <ctype.h>
/**
 *  _isalpha - Function definition
 *
 *  Description: A program that check for aphabetic character
 *  @c: parameter for accept a character
 *
 *  Return: 1 if a character is letter, lowercase , or uppercase
 *  0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
