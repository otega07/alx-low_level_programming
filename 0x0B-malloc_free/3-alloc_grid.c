#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2 dimensional arrays
 * @width: to be initialized
 * @height: to be initialized
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int t, v, e, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (t = 0; t < height; t++)
	{
		a[t] = malloc(sizeof(int) * width);
		if (a[t] == NULL)
		{
			for (v = t; v >= 0; v++)
			{
				free(a[v]);
			}
			free(a);
			return (NULL);
		}
	}
	for (e = 0; e < height; e++)
	{
		for (l = 0; l < width; l++)
		{
			a[e][l] = 0;
		}
	}
	return (a);
}
