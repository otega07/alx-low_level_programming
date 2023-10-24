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
	int e;

	for (e = 0; e < size; e++)
	{
		sum1 += a[e];
		a += size;
	}
	a -= size;

	for (e = size - 1; e >= 0; e--)
	{
		sum2 += a[e];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
