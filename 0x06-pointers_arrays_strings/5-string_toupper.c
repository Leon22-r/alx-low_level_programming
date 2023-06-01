#include "main.h"
/**
 * string_toupper - changes string to uppercase.
 * @s: the string.
 *
 * Return: pointer to the new string.
 */
char *string_toupper(char *s)
{
	char *upper;
	char up[];

	upper = &up;
	while (*s != '\0')
	{
		*s - 32 = *upper;
		s++;
		upper++;
	}
	*upper = '\0';
	return (upper);
}
