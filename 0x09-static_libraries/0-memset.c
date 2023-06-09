#include "main.h"
/**
 * _memset - fills first n bytes pointed by s constant byte b.
 * @s: memory pointer.
 * @b: the constant byte.
 * @n: last byte.
 *
 * Return: memory location pointed to by s.
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
