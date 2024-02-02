#include <stdio.h>
/**
 * main - print largest prime factor
 * number 612852475143
 * Return: (0)
 */
int main(void)
{
	long int e;
	long int t;
	long int v;

	t = 612852475143;
	for (e = 1 ; e <= t ; e++)
	{
		if (t % e == 0)
		{
			if (t == e)
			{
				printf("%ld\n", e);
				break;
			}
			v = t / e;
			t = v;
		}
	}
	return (0);
}
