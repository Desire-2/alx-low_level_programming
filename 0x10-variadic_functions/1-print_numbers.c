#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print_numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list night;
	unsigned int a;

		va_start(night, n);
	for (a = 0; a < n; a++)/*loop a*/
	{
		printf("%d", va_arg(night, int));

		if (separator && a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(night);
}
