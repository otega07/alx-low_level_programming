#include "main.h"
#include <stdio.h>
void times_table(void)
{
	int t, v, result;
	
	for (t = 0 ; t < 10 ; t++)
	{
		for (v = 0 ; v < 10 ; v++)
		{
			result = t * v;
			if (v == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d", result);
				if (v != 9)
					printf(", ");
			}
		}
		printf("%c\n", '\n');
	}
}
