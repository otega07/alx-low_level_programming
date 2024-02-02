#include <stdio.h>
/**
 * main - Entry combination of digits
 *
 * Return: always 0
 */
int main(void)
{
	int t;
	int v;

	for (t = 0 ; t <= 8 ; t++)
	{
		for (v = t + 1 ; v <= 9 ; v++)
		{
			putchar(t + '0');
			putchar(v + '0');
			if (t != 8 || v != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
