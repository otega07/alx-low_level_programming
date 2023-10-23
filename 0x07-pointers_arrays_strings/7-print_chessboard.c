#include "main.h"
/**
 * print_chessboard - entry
 * @a: array
 * Return: (0)
 */
void print_chessboard(char (*a)[8])
{
	int t;
	int v;

	for (t = 0; t < 8; t++)
	{
		for (v = 0; v < 8; v++)
			_putchar(a[t][v]);
		_putchar('\n');
	}
}
