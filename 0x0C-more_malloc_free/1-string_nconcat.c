#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of elements
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int t = 0, v = 0, e = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[t])
		t++;
	while (s2[e])
		e++;

	if (n >= e)
		l = t + e;
	else
		l = t + n;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	e = 0;
	while (v < l)
	{
		if (v <= t)
			str[v] = s1[v];
		if (v >= t)
		{
			str[v] = s2[e];
			e++;
		}
		v++;
	}
	str[v] = '\0';
	return (str);
}
