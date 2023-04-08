#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: index to start
 * @n: number of bit you want to set
 * Return: 1 for success, -1 for fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int r;

	if (index > 63)
		return (-1);

	r = 1 << index;
	*n = (*n | r);

	return (1);
}
