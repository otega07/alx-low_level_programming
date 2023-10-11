#include <stdio.h>
/**
 * main - function fibonacci98
 * Return: always 0
 */

int main(void)
{
	int fib1 = 1;
	int fib2 = 2;
	int next;
	int t;

	printf("%d, %d", fib1, fib2);
	for (t = 3 ; t < 99 ; t++)
	{
		next = fib1 + fib2;
		printf(", %d", next);
		fib1 = fib2;
		fib2 = next;
	}
	printf("\n");
	return (0);
}
