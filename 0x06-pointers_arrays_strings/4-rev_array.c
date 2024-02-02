#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: pointer
 * @n: to be converted
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int t = 0;
	int temp;

	n = n - 1;
	for (t = 0 ; t < n ; t++)
	{
		temp = a[t];
		a[t] = a[n];
		a[n] = temp;
		n--;
	}
}
