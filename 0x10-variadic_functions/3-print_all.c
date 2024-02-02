#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - this is the function that prints anything
 * @format: arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int t = 0;
	char *sep = "";

	va_start(list, format);

	if (format)
	{
		while (format[t])
		{
			switch (format[t])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					{
						const char *str = va_arg(list, char*);

						printf("%s%s", sep, str ? str : "(nil)");
					}
					break;
				default:
					continue;
			}
			sep = ", ";
			t++;
		}
		printf("\n");
		va_end(list);
	}
}
