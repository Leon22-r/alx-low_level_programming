#include "main.h"
/**
 * _strlen - count the length of a string.
 * @s: the pointer to the string.
 *
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	int x;
	int y;

	y = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		y++;
	}
	return (y);
}
