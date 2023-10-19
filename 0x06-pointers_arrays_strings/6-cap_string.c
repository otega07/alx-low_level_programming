#include "main.h"
/**
 * cap_string - capitalize words of a string
 * @str: to be capitalized
 * Return: pointer
 */
char *cap_string(char *str)
{
	int e;
	int v;
	char c[] = {44, 59, 46, '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};

	for (e = 0 ; str[e] != '\0' ; e++)
	{
		if (e == 0 && str[e] >= 'a' && str[e] <= 'z')
		{
			str[e] = str[e] - 32;
		}
	for (v = 0 ; c[v] != '\0' ; v++)
	{
		if (c[v] == str[e] && (str[e + 1] >= 'a' && str[e + 1] <= 'z'))
		{
			str[e + 1] = str[e + 1] - 32;
		}
	}
	}
	return (str);
}
