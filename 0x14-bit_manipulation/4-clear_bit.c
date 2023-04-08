#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a gin index.
 * @index: index to start.
 * @n: number of bit to set.
 * Return: 1 on success, -1 fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int r;

	if (index > 63)
		return (-1);

	r = 1 << index;
	if (*n & r)
		*n ^= r;
	return (1);
}
