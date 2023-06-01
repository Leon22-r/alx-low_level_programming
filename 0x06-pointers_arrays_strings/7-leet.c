#include "main.h"
/**
 * leet - encode a string to 1337.
 * @s: the string.
 *
 * Return: pointer to the string.
 */
char *leet(char *s)
{
	char n[] = {'a', 'e', 'o', 't', 'l'};
	char x[] = {4, 3, 0, 7, 1};
	int i;
	int y;

	y = 0;
	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == n[i]; || *s == n[i] - 32)
			{
				n[i] = x[i];
			}
		}
		s++;
		y++
	}
	return (s - y);
}
