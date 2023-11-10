#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments passed to function
 * @...: parameter
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int t;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (t = 0; t < n; t++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);

	return (sum);
}
