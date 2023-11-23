#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer
 * Return: converted number, or 0 if b is NULL
 *	or if there are chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int t, v, sum, pow, len;
	int base;

	base = 2;
	sum = 0;
	pow = 1;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - '0');

	for (t = 0; b[t] != '\0'; t++)
	{
		if (b[t] != '0' && b[t] != '1')
			return (0);

		for (v = len - 1; v > 0; v--)
			pow *= base;

		sum += (pow * (b[t] - '0'));
		len--;
		pow = 1;
	}
	return (sum);
}
