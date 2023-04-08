#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string to be converted
 * Return: onverted number
 */
unsigned int binary_to_uint(const char *b)
{

	int length, binary;
	unsigned int sum;

	if (b == NULL)
		return (0);

	sum = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, binary = 1; length >= 0; length--, binary = binary * 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}


		if (b[length] & 1)
		{
			sum = sum + binary;
		}
	}

	return (sum);
}
