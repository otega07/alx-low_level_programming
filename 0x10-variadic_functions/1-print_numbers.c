#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @separator: seperates numbers
 * @n: number of integers passed to function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int t;
	va_list list;

	va_start(list, n);

	for (t = 0; t < n; t++)
	{
		printf("%d", va_arg(list, int));

		if (separator && t < n - 1)
			printf("%s", separator);
	}
	va_end(list);

	printf("\n");
}
