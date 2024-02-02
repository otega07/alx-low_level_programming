#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie = NULL;
	int name_l = 0;
	int owner_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		owner_l = _strlen(owner) + 1;
		doggie = malloc(sizeof(dog_t));

		if (doggie == NULL)
			return (NULL);

		doggie->name = malloc(sizeof(char) * name_l);
		doggie->owner = malloc(sizeof(char) * owner_l);

		if (doggie->name == NULL || doggie->owner == NULL)
		{
			free(doggie->name);
			free(doggie->owner);
			free(doggie);
			return (NULL);
		}

		doggie->name = _strcpy(doggie->name, name);
		doggie->owner = _strcpy(doggie->owner, owner);
		doggie->age = age;
	}
	return (doggie);
}

/**
 * _strlen - length of a string
 * @s: string to count
 * Return: string length
 */
int _strlen(char *s)
{
	int v = 0;

	for (; *s != '\0'; s++)
	{
		v++;
	}
	return (v);
}

/**
 * _strcpy - string copy
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int t = 0;

	for (; src[t] != '\0'; t++)
	{
		dest[t] = src[t];
	}
	dest[t++] = '\0';
	return (dest);
}
