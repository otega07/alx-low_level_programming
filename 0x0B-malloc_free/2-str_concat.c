#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: s1, s2
 */

char *str_concat(char *s1, char *s2)
{
	int t = 0, v = 0, e = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[t])
		t++;

	while (s2[v])
		v++;

	l = t + v;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);
	v = 0;

	while (e < l)
	{
		if (e <= t)
			s[e] = s1[e];
		if (e >= t)
		{
			s[e] = s2[v];
			v++;
		}
		e++;
	}
	s[e] = '\0';
	return (s);
}
