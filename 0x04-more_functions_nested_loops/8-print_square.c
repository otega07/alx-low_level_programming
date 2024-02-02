#include "main.h"
/**
 * print_square - print square followed by a new line
 * @size: number of # square
 * Return: (void)
 */
void print_square(int size)
{
	int t;
	int v;

	if (size > 0)
	{
		for (t = 0 ; t < size ; t++)
		{
			for (v = 0 ; v < size ; v++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
