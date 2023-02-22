#include "main.h"
/**
 * print_to_98 - Function definition
 *
 * Description: A program that print all natural number
 * from n to 98
 * @n: paramenter that accept integer
 *
 * Return: result
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
				break;
			printf(",");
			printf(" ");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
				break;
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
