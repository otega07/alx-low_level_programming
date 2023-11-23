#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer
 * @index: position of bit
 * Return: 1 if it works, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8 - 1)
		return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
