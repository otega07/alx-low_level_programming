#include "main.h"

int real_prime(int n, int t);

/**
 * is_prime_number - if integer is prime or not
 * @n: number to evaluate
 * Return: 1 if n is a prime number, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - if a number is prime
 * @n: evaluate
 * @t: iterator
 * Return: 1 if n is prime, if not 0
 */
int real_prime(int n, int t)
{
	if (t == 1)
		return (1);
	if (n % t == 0 && t > 0)
		return (0);
	return (real_prime(n, t -  1));
}
