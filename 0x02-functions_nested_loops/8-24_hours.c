#include "main.h"
/**
 * jack_bauer - function jack bauer
 * Return: void
 */

void jack_bauer(void)
{
	int t;
	int v;

	for (t = 0 ; t < 24 ; t++)
	{
		for (v = 0 ; v < 60 ; v++)
		{
			_putchar(t / 10 + '0');
			_putchar(t % 10 + '0');
			_putchar(':');
			_putchar(v / 10 + '0');
			_putchar(v % 10 + '0');
			_putchar('\n');
		}
	}
}
