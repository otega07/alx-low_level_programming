#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to allocated space memory
 * @str: string
 * Return: duplicated string
 */
char *_strdup(char *str)
{
	int t = 0;
	int v = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[v])
	{
		v++;
	}
	s = malloc((sizeof(char) * v) + 1);
	if (s == NULL)
		return (NULL);
	while (t < v)
	{
		s[t] = str[t];
		t++;
	}
	s[t] = '\0';
	return (s);
}
