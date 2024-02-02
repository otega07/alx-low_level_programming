#include "main.h"
/**
 * _strlen_recursion - returns length of string
 * @s: parameter
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int t = 0;

	if (*s)
	{
		t++;
		t += _strlen_recursion(s + 1);
	}
	return (t);
}
