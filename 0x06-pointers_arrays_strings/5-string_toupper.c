#include "main.h"
/**
 * string_toupper - converts string from lower to upper case
 *
 * @n: to be converted
 *
 * Return: (n)
 */
char *string_toupper(char *n)
{
	int t;

	for (t = 0 ; n[t] != '\0' ; t++)
	{
		if (n[t] >= 97 && n[t] <= 122)
		{
			n[t] = n[t] - 32;
		}
		t++;
	}
	return (n);
}
