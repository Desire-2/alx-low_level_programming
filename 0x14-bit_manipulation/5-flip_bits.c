#include "main.h"
/**
 * flip_bits - Function returns the number of bits,
 * you would need to flip to
 * get from one number to another.
 * @n: unsigned long int
 * @m:unsigned long int
 * Return: void
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_r = n ^ m;
	unsigned int cnt = 0;

	while (xor_r != 0)
	{
		cnt++;
		xor_r &= (xor_r - 1);
	}
	return (cnt);
}

