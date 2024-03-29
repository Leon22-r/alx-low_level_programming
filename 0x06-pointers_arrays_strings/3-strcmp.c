#include "main.h"
/**
 * _strcmp - compares 2 strings
 * @s1: 2sn string
 *
 * @s2: 1st string
 * Return: difference.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
