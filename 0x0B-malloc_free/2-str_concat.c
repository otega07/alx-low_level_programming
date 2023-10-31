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
	int t = 0, len = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (t = 0; s1[t] || s2[t]; t++)
	{
		len++;
	}
	s = malloc(sizeof(char) * len);
	if (s == NULL)
	{
		return (NULL);
	}
	for (t = 0; s1[t]; t++)
	{
		s[t] = s1[t];
	}
	for (t = 0; s2[t]; t++)
	{
		s[t] = s2[t];
	}
	return (s);
}
