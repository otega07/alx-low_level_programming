#include "main.h"
/**
 * print_diagonal - draws diagonal
 * @n: input integer
 * Return: (void)
 */
void print_diagonal(int n)
{
	int t;
	int v;

	for (t = 0 ; t < n ; t++)
	{
		if (n > 1)
			for (v = 0 ; v < t ; v++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
