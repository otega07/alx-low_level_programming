#include <stdio.h>
/**
 * main - function fibonacci98
 * Return: always 0
 */

int main(void)
{
	unsigned long int t;
	unsigned long int now = 1;
	unsigned long int lat = 2;
	unsigned long int T = 1000000000;
	unsigned long int now1;
	unsigned long int now2;
	unsigned long int lat1;
	unsigned long int lat2;


	printf("%lu", now);
	for (t = 1 ; t < 91 ; t++)
	{
		printf(", %lu", lat);
		lat += now;
		now = lat - now;
	}
	now1 = (now / T);
	now2 = (now % T);
	lat1 = (lat / T);
	lat2 = (lat % T);

	for (t = 92 ; t < 99 ; t++)
	{
		printf(", %lu", lat1 + (lat2 / T));
		printf("%lu", lat2 % T);
		lat1 = lat1 + now1;
		now1 = lat1 - now1;
		lat2 = lat2 + now2;
		now2 = lat2 - now2;
	}
	printf("\n");
	return (0);
}
