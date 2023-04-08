#include "main.h"

/**
  * flip_bits -  returns the number of bits you would need to flip
  * to get from one number to another.
  * @n: number to flip
  * @m: unsigned long int set.
  * Return: Number
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip_n = 0, cnt = 0;

	flip_n = n ^ m;
	while (flip_n)
	{
		if (flip_n & 1)
			cnt++;

		flip_n >>= 1;
	}

	return (cnt);
}
