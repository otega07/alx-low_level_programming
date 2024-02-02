#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry point
 * @a: integer
 * @size: size of matrix
 * Return: (0)
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int x, y;

	for (x = 0, y = 0; x < size; x++, y++)
	{
		sum1 += a[x * size + y];
		sum2 += a[x * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
