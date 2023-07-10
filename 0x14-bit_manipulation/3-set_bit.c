#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: bite to be set
 * @n: unsigned long integer type
 * Return: 1 on success, -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;
	 unsigned int bits_typ = 0;

	while (m != 0)
	{
		m <<= 1;
		bits_typ++;
	}
	bits_typ--;
	if (index > bits_typ)
	{
		return (-1);
	}
	*n |= (1ul << index);
	return (1);
}

