#include "main.h"
/**
 * rev_string - reverse a string
 * @s: to be printed
 * Return: void
 */
void rev_string(char *s)
{
	int t;
	int count = 0;

	for (t = 0 ; s[t] != '\0' ; t++)
		count++;
	for (t = 0 ; t < count / 2 ; t++)
	{
		char v;

		v = s[t];
		s[t] = s[count - 1 - t];
		s[count - 1 - t] = v;
	}
}
