#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: (0)
 */
int _strcmp(char *s1, char *s2)
{
	int t;
	int v = 0;

	for (t = 0 ; s1[t] != '\0' && v == 0 ; t++)
	{
		v = s1[t] - s2[t];
	}
	return (v);
}
