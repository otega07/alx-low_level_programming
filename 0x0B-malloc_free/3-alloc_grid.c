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
	int t, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		return (NULL);
	}
	for (t = 0; t < height; t++)
	{
		a[t] = malloc(sizeof(int) * width);
		if (a[t] == NULL)
		{
			for (l = 0; l < t; l++)
			{
				free(a[l]);
			}
			free(a);
			return (NULL);
		}
	}
	for (t = 0; t < height; t++)
	{
		for (l = 0; l < width; l++)
		{
			a[t][l] = 0;
		}
	}
	return (a);
}
