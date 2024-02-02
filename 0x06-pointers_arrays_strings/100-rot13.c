#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder
 * @str: pointer
 * Return: str
 */
char *rot13(char *str)
{
	int t;
	int v;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (t = 0 ; str[t] != '\0' ; t++)
	{
		for (v = 0 ; c[v] != '\0' ; v++)
		{
			if (str[t] == c[v])
			{
				str[t] = d[v];
				break;
			}
		}
	}
	return (str);
}
