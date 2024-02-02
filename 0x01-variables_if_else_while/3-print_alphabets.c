#include <stdio.h>
/**
 * main - entry point for uppercase alphabets
 *
 * Return: always 0
 */
int main(void)
{
	int t;

	for (t = 'a' ; t <= 'z' ; t++)
		putchar(t);
	for (t = 'A' ; t <= 'Z'; t++)
		putchar(t);
	putchar ('\n');
	return (0);
}
