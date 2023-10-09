#include <stdio.h>
/**
 * main - Entry smile in mirror
 *
 * Return: always 0
 */
int main(void)
{
	int t;

	for (t = 'z' ; t >= 'a' ; t--)
		putchar(t);
	putchar('\n');
	return (0);
}
