#include "main.h"
/**
 * _strcpy - copies src to dest.
 * @src: string to copy.
 * @dest: pointer to copy to.
 *
 * Return: pointer to copied string.
 *
 */
char *_strcpy(char *dest, char *src)
{
	int x;
	int y;

	for (x = 0; *(src + x) != '\0'; x++)
	{
		*(dest + x) = *(src + x);
		y = x;
	}
	y = y + 1;
	*(dest + y) = '\0';

	return (dest);
}
