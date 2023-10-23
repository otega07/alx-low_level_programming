#include "main.h"
/**
 * _strchr - entry point
 * @c: input 1
 * @s: input 2
 * Return: (0)
 */
char *_strchr(char *s, char c)
{
	int t;

	for (t = 0 ; s[t] >= '\0' ; t++)
	{
		if (s[t] == c)
			return (&s[t]);
	}
	return (0);
}
