#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the dog
 * @d: The dog to be freed
 * Return: NULL if function fails
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
