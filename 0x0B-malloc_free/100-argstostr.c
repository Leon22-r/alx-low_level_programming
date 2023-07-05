#include "main.h"
/**
 * argstostr - concatenates all the arguements
 * @ac: the no of arguements
 * @av: the arguements.
 * Return: the new string
*/
char *argstostr(int ac, char **av)
{

	int y, c, i = 0, len = 0;
	char *x;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (y = 0; y < ac; y++)
	{
		for (c = 0; av[y][c]; c++)
			;
		len += c + 1;
	}
	x = malloc(len + 1);
	if (x != NULL)
	{
		for (y = 0; y < ac; y++)
		{
			for (c = 0; av[y][c]; c++, i++)
				x[i] = av[y][c];
			x[i++] = '\n';
		}
		x[i] = '\0';
	}
	return (x);
}
