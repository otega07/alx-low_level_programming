#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - converts params passed to the program
 * @ac: argument count
 * @av: argument vector
 * Return: new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int ch = 0, t = 0, v = 0, e = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (t < ac)
	{
		while (av[t][v])
		{
			ch++;
			v++;
		}
		v = 0;
		t++;
	}
	s = malloc((sizeof(char) * ch) + ac + 1);

	t = 0;
	while (av[t])
	{
		while (av[t][v])
		{
			s[e] = av[t][v];
			e++;
			v++;
		}
		s[e] = '\n';

		v = 0;
		e++;
		t++;
	}
	e++;
	s[e] = '\0';
	return (s);
}
