#include "main.h"
/**
 * print_alphabet_x10 - Alphabet x10
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int t;
	char v;

	for (t = 0 ; t < 10 ; t++)
	{
		for (v = 'a' ; v <= 'z' ; v++)
			_putchar(v);
		_putchar('\n');
	}
}
