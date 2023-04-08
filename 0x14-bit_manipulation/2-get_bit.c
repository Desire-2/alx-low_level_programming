#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @index: index to start
 * @n: unsigned long int input.
 * Return: Index on success, -1 on fail.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m = 0;

	while (n)
	{
		if (m == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n >> 1;
		m++;
	}

	if (index > m && index < 63)
		return (0);

	return (-1);
}

