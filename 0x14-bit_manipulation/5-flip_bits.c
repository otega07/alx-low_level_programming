#include "main.h"
/**
 * flip_bits - returns the number of bits flipped
 * @n: first number to compare
 * @m: second number
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned long int count = 0;

	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
