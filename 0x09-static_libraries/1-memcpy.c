#include "main.h"
/**
 * _memcpy - copies bytes from src to dest upto n bytes.
 * @dest: destination
 * @src: the source.
 * @n: number.
 *
 * Return: destination (whatever is copied.)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
