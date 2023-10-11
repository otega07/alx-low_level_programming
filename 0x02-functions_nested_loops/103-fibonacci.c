#include <stdio.h>
/**
 * main - function fibonacci sequence
 * Return: always 0
 */

int main(void)
{
	int end = 4000000;
	int fib1 = 1;
	int fib2 = 2;
	int next;
	int sum = 2;

	while (next <= end)
	{
		next = fib1 + fib2;
		if (next % 2 == 0)
			sum = sum + next;
		fib1 = fib2;
		fib2 = next;
	}
	printf("%d\n", sum);
	return (0);
}
