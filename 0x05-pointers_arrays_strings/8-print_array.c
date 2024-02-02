#include "main.h"
#include <stdio.h>
/**
 * print_array - elements of an array
 * @a: array to be used
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0 ; t < n ; t++)
	{
		printf("%d", a[t]);
		if (t < n - 1)
			printf(", ");
	}
	printf("\n");
}
