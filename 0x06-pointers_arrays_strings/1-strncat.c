#include "main.h"
/**
 * _strncat - concatenates two string
 * @n: number of bytes
 * @dest: destination
 * @src: source
 * Return: dest + n of src
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest;
	int t;

	for (len_dest = 0 ; dest[len_dest] != '\0'; len_dest++)
	{

	}
	for (t = 0 ; src[t] != 0 && t < n ; t++)
	{
		dest[len_dest + t] = src[t];
	}
	return (dest);
}
