#include "main.h"
/**
 * _strchr - returns a pointer to the first occurence of c.
 * @s: pointer of string to search.
 * @c: character to search for.
 *
 * Return: pointer to first occurence of c.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (s);
}
