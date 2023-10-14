#include "main.h"
/**
 * print_line - draw a straight line
 * @n: input
 * Return: (void)
 */
void print_line(int n)
{
	int t;

	for (t = 0 ; t < n ; t++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
