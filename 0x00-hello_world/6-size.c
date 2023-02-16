#include <stdio.h>


/**
 * main - Print the size of various typesa based on
 *  the computer it is compiled and run on..
 *  Return: Always 0.
 */
int main(void)
{
	printf("Size of a chsr: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long long int));
	prinntf("Size of a float %zu byte(s)\n, sizeof(float));
	return (0);
}
