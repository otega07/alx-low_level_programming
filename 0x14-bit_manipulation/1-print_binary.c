#include "main.h"
/**
 * print_binr - print the binary rep of a number recursively
 * @n: decimal
 * Return: void
 */
void print_binr(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}
	print_binr(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal to be converted
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_binr(n);
	}
}
