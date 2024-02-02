#include "main.h"
/**
 * print_last_digit - last digit of a number
 * @p: to be checked
 * Return: t
 */
int print_last_digit(int p)
{
	int t;

	t = p % 10;
	if (p < 0)
		t = -t;
	_putchar(t + '0');
	return (t);
}
