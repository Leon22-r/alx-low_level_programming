#include "main.h"
/**
 * _strcat - append a string to another
 * @dest: string to be appended.
 * @src: strinng to append to dest.
 *
 * Return: pointer to the resultant string
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	y = 0;
	for (x = 0; *(dest + x) != '\0'; x++)
	{
		y++;
	}
	for (x = 0; *(src + x) != '\0'; x++)
	{
		*(dest + y) = *(src + x);
		y++;
	}
	*(dest + y) = '\0';
	return (dest);
}
