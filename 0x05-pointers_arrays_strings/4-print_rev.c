#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: sring to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int t;
	int count = 0;

	for (t = 0 ; s[t] != '\0' ; t++)
	{
		count++;
	}
	for (t = count - 1 ; t >= 0 ; t--)
	{
		_putchar(s[t]);
	}
	_putchar('\n');
}
