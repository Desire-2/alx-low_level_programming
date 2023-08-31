#include "main.h"

/**
 * binary_to_uint - Function that converts a binary,
 * 					number to an unsigned int.
 * @b : to be pointed to the string
 * Return: converted numbe
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, cha_base;
	unsigned int  conv_n = 0;
	

	if (b == 0)
	{
		return (0);
	}


	while (b[len] != '\0')
	{
		len++;
	}

	for (len--, cha_base = 1; len >= 0; len--, cha_base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			conv_n += cha_base;
		}
	}
	return (conv_n);
}
