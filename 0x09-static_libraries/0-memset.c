#include "main.h"
/**
 * _memset - block of memory with specific value
 * @n: number of bytes
 * @s: address of memory
 * @b: desired value
 * Return: new values for n
 */
char *_memset(char *s, char b, unsigned int n)
{
	int t;

	for (t = 0 ; n > 0 ; t++)
	{
		s[t] = b;
		n--;
	}
	return (s);
}
