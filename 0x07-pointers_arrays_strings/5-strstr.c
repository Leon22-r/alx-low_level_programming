#include "main.h"
/**
 * _strstr - returns a pointer to the first occurence of needle in haystack.
 * @haystack: string to search through.
 * @needle: string to search for.
 *
 * Return: pointer to first occurence of needle
 */
char *_strstr(char *haystack, char *needle)
{
	char *s;
	int i = 0;

	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			s = haystack;
			while (*needle)
			{
				if (*haystack == *needle)
				{
					haystack++;
					needle++;
				}
				else
				{
					i = 1;
					break;
				}
			}
			if (i = 0)
				return (s);
		}
		haystack++;
	}
	return (haystack);
}
