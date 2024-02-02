#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that outputs the string
 * @argc: number of command
 * @argv: array containing command
 * Return:(0)
 */
int main(int argc, char *argv[])
{
	int t;
	int v;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	t = atoi(argv[1]);
	v = atoi(argv[2]);
	mul = t * v;
	printf("%d\n", mul);
	return (0);
}
