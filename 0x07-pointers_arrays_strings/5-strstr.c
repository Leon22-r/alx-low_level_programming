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
	while (*haystack)
	{
		if (*haystack == *needle)
			return (haystack);
		haystack++;
	}
	return (haystack);
}
