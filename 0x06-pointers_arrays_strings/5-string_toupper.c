#include "main.h"
/**
 * string_toupper - converts string from lower to upper case
 * @str: to be converted
 * Return: (n)
 */
char *string_toupper(char *str)
{
	int t;

	for (t = 0 ; str[t] != '\0' ; t++)
	{
		if (str[t] >= 'a' && str[t] <= 'z')
		{
			str[t] = str[t] - 32;
		}
	}
	return (str);
}
