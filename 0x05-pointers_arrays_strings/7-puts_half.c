#include "main.h"
/**
 * puts_half - half of a string
 * @str: to be printed
 * Rteurn: void
 */
void puts_half(char *str)
{
	int t;
	int v;
	int count;

	for (t = 0 ; str[t] != '\0' ; t++)
		count++;
	v = (count - 1) / 2;
	for (t = v + 1 ; str[t] != '\0' ; t++)
		_putchar(str[t]);
	_putchar('\n');
}
