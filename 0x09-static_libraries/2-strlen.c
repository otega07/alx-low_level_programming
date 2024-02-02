#include "main.h"
/**
 * _strlen - length of  a string
 * @s: string input
 * Return: length of string
 */
int _strlen(char *s)
{
	int t;
	int count = 0;

	for (t = 0 ; s[t] != '\0' ; t++)
		count++;
	return (count);
}
