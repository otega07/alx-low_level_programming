#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: the char to fill the array
 * Return: array filled
 */
char *create_array(unsigned int size, char c)
{
	unsigned int t;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (t = 0; t < size; t++)
	{
		s[t] = c;
	}
	return (s);
}
