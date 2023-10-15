#include "main.h"
/**
 * print_triangle - print a traiangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int t;
	int v;

	if (size > 0)
	{
		for (t = 0 ; t < size ; t++)
		{
			for (v = 0 ; v < size ; v++)
			{
				if (v < size - (t + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
