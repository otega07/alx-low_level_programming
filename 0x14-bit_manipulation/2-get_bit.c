#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number used to check value
 * @index: index of bit to get
 * Return: value of bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(size_t) * 8 - 1))
		return (-1);

	return ((n >> index) & 1);
}
