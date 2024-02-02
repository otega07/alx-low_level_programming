#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins
 * @argc: number of command
 * @argv: array containing the command
 * Return: (1) or (0)
 */
int main(int argc, char *argv[])
{
	int t = 0;
	int v = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	t = atoi(argv[1]);
	while (t > 0)
	{
		v++;
		if ((t - 25) >= 0)
		{
			t -= 25;
			continue;
		}
		if ((t - 10) >= 0)
		{
			t -= 10;
			continue;
		}
		if ((t - 5) >= 0)
		{
			t -= 5;
			continue;
		}
		if ((t - 2) >= 0)
		{
			t -= 2;
			continue;
		}
		t--;
	}
	printf("%d\n", v);
	return (0);
}
