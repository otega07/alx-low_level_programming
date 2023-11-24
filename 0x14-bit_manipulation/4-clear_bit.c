#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer
 * @index: starting from 0 of the bit you want to set
 * Return: 1 if it works, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	mask = 1;
	mask = mask << index;

	if ((*n >> index) & 1)
		*n ^= mask;
	return (1);
}
