#include <stdio.h>
/**
 * main - Entry possible combinations
 *
 * Return: always 0
 */
int main(void)
{
	int e;
	int t;
	int v;

	for (e = 0 ; e <= 7 ; e++)
	{
		for (t = e + 1 ; t <= 8 ; t++)
		{
			for (v = t + 1 ; v <= 9 ; v++)
			{
				putchar(e + '0');
				putchar(t + '0');
				putchar(v + '0');
				if (e != 7 || t != 8 || v != 9)
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
