#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members
 * @size: size
 * Return: NULL, if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int t = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);
	while (t < l)
	{
		p[t] = 0;
		t++;
	}
	return (p);
}
