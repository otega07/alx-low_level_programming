#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: result of the two added numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: result of the two subtracted numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: result of the multiplied numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second numbers
 * Return: result of the divided numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - reainder of the division of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder of the divided numbers a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
