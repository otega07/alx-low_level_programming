#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints string
 * @separator: string to be printed
 * @n: number of strings passed to function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int t;
	char *str;

	va_list list;

	va_start(list, n);

	for (t = 0; t < n; t++)
	{
		str = va_arg(list, char *);

		if (!str)
			str = "(nil)";

		printf("%s", str);

		if (separator && t < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
