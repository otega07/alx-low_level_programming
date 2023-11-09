#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: number of elements of array
 * @cmp: pointer to the function
 * Return: 0 if size is <=, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int t = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (t < size)
			{
				if (cmp(array[t]))
					return (t);
				t++;
			}
		}
	}
	return (-1);
}
