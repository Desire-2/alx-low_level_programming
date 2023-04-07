#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number that print in binary.
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1;
	 i <<= (sizeof(unsigned long int) * 8 - 1);

	do	{
		printf("1"); }

		while
		{
			(i > 0 || n & i)
			if (!n)
				printf("0");
		i >>= 1;
	}
}
