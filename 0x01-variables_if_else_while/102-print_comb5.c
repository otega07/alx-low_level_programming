#include <stdio.h>
/**
 * main - Entry two digits
 *
 * Return: always 0
 */
int main(void)
{
	int t;
	int v;

	for (t = 0 ; t < 100 ; t++)
	{
		for (v = 0 ; v < 100 ; v++)
		{
			if (t < v)
			{
				putchar((t / 10) + 48);
				putchar((t % 10) + 48);
				putchar(' ');
				putchar((v / 10) + 48);
				putchar((v % 10) + 48);
				if (t != 98 || v != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
