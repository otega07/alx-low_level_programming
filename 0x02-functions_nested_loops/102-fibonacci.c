#include <stdio.h>
/**
 * main - function fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long int next;
	int t;

	printf("%lu, ", fib1);
	for (t = 1 ; t < 50 ; t++)
	{
		printf("%lu", fib2);
		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
		if (t != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
