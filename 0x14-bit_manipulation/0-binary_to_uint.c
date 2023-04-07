#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string to be converted
 * Return: onverted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		while (b[i] < '0' || b[i] > '1')
			return (0);
		val = 2 * val +  b[i] - '0';
	}
	return (val);
}
