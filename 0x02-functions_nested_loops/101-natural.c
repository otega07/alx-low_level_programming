#include <stdio.h>
/**
 * main - function of multiples of or below
 * Return: always 0
 */

int main(void)
{
	int sum = 0;
	int t;

	for (t = 0 ; t < 1024 ; t++)
	{
		if (t % 3 == 0 || t % 5 == 0)
			sum = sum + t;
	}
	printf("%d\n", sum);
	return (0);
}
