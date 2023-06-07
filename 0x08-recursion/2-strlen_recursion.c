#include "main.h"
/**
 * _strlen_recursion - prints the lenght of a string.
 * @s: the string.
 * Return: the length.
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s++));
}
