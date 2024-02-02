#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - opcodes of the program
 * @a: address of main function
 * @n: number of bytes
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%.2hhx", a[t]);
		if (t < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - print opcodes of its own main function
 * @argc: argument count
 * @argv: argumtnet vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int v;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	v = atoi(argv[1]);
	if (v < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *) &main, v);
	return (0);
}
