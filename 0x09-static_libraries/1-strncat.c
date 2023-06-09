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
	char *s;
	int x;

	s = dest;
	x = 0;
	while (*dest != '\0')
		dest++;
	while (x < n)
	{
		*dest = *src;
		dest++;
		src++;
		x++;
	}
	*dest = '\0';

	return (s);
}
