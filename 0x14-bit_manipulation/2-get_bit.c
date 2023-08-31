#include "main.h"
/**
 * get_bit - Functionn  returns,
 * 		the value of a bit at a given index.
 * @n: bit count
 * @index: index of bit you want to get
 * Return: index on succsess, -1  on fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	 unsigned long int m = 1;
	unsigned int bit_cnt = 0;

	while (m != 0)
	{
		if (bit_cnt == index)
	{
		return ((n & m) != 0);
	}
		m <<= 1;
		bit_cnt++;
	}
	return (-1);
