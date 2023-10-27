#include "main.h"
/**
 * _strstr - entry
 * @haystack: substring
 * @needle: string
 * Return: (0)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *t = haystack;
		char *v = needle;

		while (*t == *v && *v != '\0')
		{
			t++;
			v++;
		}
		if (*v == '\0')
			return (haystack);
	}
	return (0);
}
