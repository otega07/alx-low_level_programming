#include "main.h"
/**
 * leet - encode into 1337
 * @str: input value
 * Return: str
 */
char *leet(char *str)
{
	int t;
	int v;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (t = 0 ; str[t] != '\0' ; t++)
	{
		for (v = 0 ; v < 10 ; v++)
		{
			if (str[t] == c[v])
			{
				str[t] = d[v];
			}
		}
	}
	return (str);
}
