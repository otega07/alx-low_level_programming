#include <stdio.h>
/**
 * main - function fibonacci98
 * Return: always 0
 */

int main(void)
{
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;
	unsigned long next;
	int t;

	printf("%lu, %lu, ", fib1, fib2);
	for (t = 3 ; t <= 98 ; t++)
	{
		next = fib1 + fib2;
		printf("%lu", next);
		if (t != 98)
			printf(", ");
		fib1 = fib2;
		fib2 = next;
	}
	printf("\n");
	return (0);
}
