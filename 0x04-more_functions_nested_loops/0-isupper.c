#include "main.h"
/**
 * _isupper - detect upper case alphabets
 * @c: input character
 * Return: (1) if uppercase (0) otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
