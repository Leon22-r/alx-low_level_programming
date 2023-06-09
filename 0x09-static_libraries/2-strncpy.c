#include "main.h"
/**
 * _strncpy - copys a string upto a specified point
 * @dest: destination
 * @src: source
 *
 * @n: point where to reach
 *
 * Return: resutltant string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
