#include <stdio.h>
/**
 * main - prints number of arguments passed
 * @argc: nmumer of command line
 * @argv: array containing command line
 * Return:(0)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
