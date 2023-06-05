#include "main.h"
/**
 * _strspn - calculates the length in bytes the initial of the
 * intial segments of s
 * @s: points to the string to search.
 * @accept: string containing bytes to match
 * Return: length of matching bytes.
 */
char *_strspn(char *s, char *accept)
{
	int i;
	int count;
	int match;

	count = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				match = 1;
			}
		}
		if (!match)
			return (count);
		match = 0;
		s++;
	}
	return (count);
}
