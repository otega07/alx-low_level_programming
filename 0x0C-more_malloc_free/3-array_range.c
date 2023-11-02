#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *a;
	int t, l;

	if (min > max)
		return (NULL);

	l = max - min + 1;
	a = malloc(sizeof(int) * l);

	if (a == NULL)
		return (NULL);
	for (t = 0; t < l; t++)
	{
		a[t] = min;
		min++;
	}
	return (a);
}
