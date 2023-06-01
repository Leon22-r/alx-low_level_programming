#include "main.h"
/**
 * _strncat - appends src to dest upto to a specified number.
 * @dest: destinaton.
 * @src: source.
 * @n: number to reach.
 *
 * Return: resultant string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	y = 1;
	for (x = 0; dest[x] != '\0'; x++)
	{
		y++;
	}
	for (x = 0; x < n; x++)
	{
		dest[y] = src[x];
		y++;
	}
	dest[y] = '\0';

	return (dest);
}
