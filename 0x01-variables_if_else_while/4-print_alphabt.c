#include <stdio.h>
/**
 * main - entry except q and e
 *
 * Return: always 0
 */
int main(void)
{
	int t;

	for (t = 'a' ; t <= 'z' ; t++)
		if (t != 'q' && t != 'e')
			putchar(t);
	putchar('\n');
	return (0);
}
