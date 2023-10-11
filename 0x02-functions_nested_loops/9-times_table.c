#include "main.h"
#include <stdio.h>
/**
 * times_table - function times table
 * Return: void
 */

void times_table(void)
{
	int t;
	int v;
	int result;

	for (t = 0 ; t <= 9 ; t++)
	{
		for (v = 0 ; v <= 9 ; v++)
		{
			result = t * v;
			if (v == 0)
			{
				printf("%2d", result);
			}
			else
			{
				printf(", %2d", result);
			}
		}
		printf("\n");
	}
}
