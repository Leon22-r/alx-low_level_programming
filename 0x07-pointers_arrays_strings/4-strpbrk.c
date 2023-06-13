#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - points to first element of s that matches one in accept.
 * @s: string to search match.
 * @accept: charaters to search for.
 * Return: pointer to first matching character.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	s = NULL;
	return (s);
}
