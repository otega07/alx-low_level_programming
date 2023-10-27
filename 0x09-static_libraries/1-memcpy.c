#include "main.h"
/**
 * _memcpy - copies a memory area
 * @n: number of bytes
 * @src: where its copied
 * @dest: where its stored
 * Return: memory with n changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t;
	int v = n;

	for (t = 0 ; t < v ; t++)
	{
		dest[t] = src[t];
		n--;
	}
	return (dest);
}
