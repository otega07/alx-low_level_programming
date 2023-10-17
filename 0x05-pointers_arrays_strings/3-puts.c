#include "main.h"
/**
 * _puts(char *str) - prints a string followed by new line
 * @str: strings to be printed
 * Return: void
 */
void _puts(char *str)
{
	int t;

	for (t = 0 ; str[t] != '\0' ; t++)
	{
		_putchar(str[t]);
	}
	_putchar('\n');
}

