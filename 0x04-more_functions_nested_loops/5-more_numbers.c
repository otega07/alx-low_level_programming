#include "main.h"
/**
 * more_numbers - print 10 times the number 0 to 14
 * Return: (void)
 */
void more_numbers(void)
{
	int t;
	int v;

	for (t = 0 ; t <= 9 ; t++)
	{
		for (v = 0 ; v <= 14 ; v++)
		{
			if (v >= 10)
			{
				_putchar((v / 10) + '0');
			}
			_putchar((v % 10) + '0');
		}
		_putchar('\n');
	}
}
