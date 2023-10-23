#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry point
 * @a: input 1
 * @size: input 2
 * Return: (0)
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int e;

	for (e = 0; e < size; e++)
	{
		sum1 = sum2 + a[e * size + e];
	}
	for (e = size - 1; e >= 0; e--)
	{
		sum2 += a[e * size + (size - e - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
