#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: the string.
 * Return: pointer to the string.
 */
char *_strdup(char *str)
{
	char *f;
	int n;
	int i;

	if (str == NULL)
		return (NULL);
	n = _strlen(str);
	f = malloc(sizeof(char) * n);
	if (f == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		f[i] = str[i];
	}
	f[i] = '\0';
	return (f);

}
/**
 * _strlen - finds the length of a string.
 * @s: the string
 * Return: length of string.
 */
int _strlen(char *s)
{
	int i;

	while (*s)
	{
		s++;
		i++;
	}
	return (i + 1);
}
