#include <stdio.h>

/*
 * main - print a[2] = 98
 * @s: You are not allowed to use the variable a in your new line of code
 * @s: You are not allowed to modify the variable p
 * Written by Desire
 * Return: 0
 */
int main(void)
{
	int n;
	int a[5];
	int *p;
	a[2] = 1024;
	p = &n;
	p[5] = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
