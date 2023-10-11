#include <stdio.h>
/**
 * main - function fibonacci98
 * Return: always 0
 */

int main(void)
{
	unsigned long int t, v, e, v1, v2, e1, e2;

	v = 1;
	e = 2;

	printf("%lu", v);
	for (t = 1 ; t <= 91 ; t++);
	{
		printf(", %lu", e);
		e = e + v;
		v = e - v;
	}
	v1 = v / 1000000000;
	v2 = v % 1000000000;
	e1 = e / 1000000000;
	e2 = e % 1000000000;

	for (t = 92 ; t < 99 ; t++)
	{
		printf(", %lu", e1 + (e2 / 1000000000));
		printf("%lu", e2 % 1000000000);
		e1 = e1 + v1;
		v1 = e1 - v1;
		e2 = e2 + v2;
		v2 = e2 - v2;
	}
	printf("\n");
	return (0);
}
