#include "main.h"
/**
 * _strncpy - function that copies a string
 * @n: number of byte
 * @src: source
 * @dest: destination
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int t;

	for (t = 0 ; src[t] != '\0' && t < n ; t++)
	{
		dest[t] = src[t];
	}
	for (t = t ; t < n ; t++)
	{
		dest[t] = '\0';
	}
	return (dest);
}
