#include "main.h"
/**
 * string_toupper - changes string to uppercase.
 * @s: the string.
 *
 * Return: pointer to the new string.
 */
char *string_toupper(char *s)
{
	int x;
	
	x = 0;
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
		s++;
		x++;
	}
	return (s - x);
}
