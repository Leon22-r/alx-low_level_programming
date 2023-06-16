#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * string_nconcat - adds string2 to string1.
 * @s1: the 1st string.
 * @s2: the 2nd string.
 * @n: no of charaters to copy from s2.
 * Return: the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k, x;
	unsigned int j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = _strlen(s1);
	j = _strlen(s2);
	if (n >= j)
		k = i + j + 1;
	else
		k = i + n + 1;
	s = malloc(sizeof(char) * k);

	if (s == NULL)
		return (NULL);
	for (x = 0; x < k - 1; x++)
	{
		if (*s1)
		{
			s[x] = *s1;
			s1++;
		}
		else
		{
			s[x] = *s2;
			s2++;
		}
	}
	s[x] = '\0';
	return (s);
}
/**
 * _strlen - length of a string.
 * @s: the string.
 * Return: length
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	if (s == NULL)
		return (0);
	while (*s)
	{
		n++;
		s++;
	}
	return (n);
}
