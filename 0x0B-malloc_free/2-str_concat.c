#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * _strlen - finds the length of a string.
 * @s: the string
 * Return: length of string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}
/**
 * str_concat - two strings are joined.
 * @s1: the first string
 * @s2: the second string.
 * Return: new string formed after concatenation.
 */
char *str_concat(char *s1, char *s2)
{
	int n, i, y, x;
	char *f;

	x = _strlen(s2);
	y = _strlen(s1);
	n = y + x + 1;
	f = malloc(sizeof(char) * n);
	if (f == NULL)
		return (NULL);
	if (y != 0)
	{
		for (i = 0; i < y; i++)
		{
			f[i] = *s1;
			s1++;
		}
	}
	if (x != 0)
	{
		for (i = y; i <= n; i++)
		{
			f[i] = *s2;
			s2++;
		}
	}
	else
		f[n - 1] = '\0';
	return (f);
}
