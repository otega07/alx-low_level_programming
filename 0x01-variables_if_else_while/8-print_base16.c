#include <stdio.h>
/**
 * main - Entry hexadecimal
 *
 * Return: always 0
 */
int main(void)
{
	int t;
	char v;

	for (t = 0 ; t < 10 ; t++)
		putchar(t + '0');
	for (v = 'a' ; v <= 'f' ; v++)
		putchar(v);
	putchar('\n');
	return (0);
}
