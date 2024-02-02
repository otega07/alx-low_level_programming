#include <stdio.h>
/**
 * main - print fizzbuzz in multiples of 3 and 5
 *
 * Return: (0)
 */
int main(void)
{
	int t;

	for (t = 1 ; t < 100 ; t++)
	{
		if ((t % 3 == 0) && (t % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (t % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (t % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", t);
		}
	}
	printf("Buzz");
	printf("\n");

	return (0);
}
