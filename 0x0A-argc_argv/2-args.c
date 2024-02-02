#include <stdio.h>
/**
 * main - prints all arguments recieved
 * @argc: number of command
 * @argv: array containing command
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int t;

	for (t = 0; t < argc; t++)
	{
		printf("%s\n", argv[t]);
	}
	return (0);
}
