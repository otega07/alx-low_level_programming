#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - parameter on each element of an array
 * @action: pointer to the function to be used
 * @array: the array of the function
 * @size: size of the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int v;

	if (array == NULL || action == NULL)
		return;
	for (v = 0; v < size; v++)
		action(array[v]);
}
