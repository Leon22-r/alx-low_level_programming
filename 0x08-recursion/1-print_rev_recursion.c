#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: the string.
 * Return: void .
 */
void _print_rev_recursion(char *s)
{
	char **c = &s;

	if (*s != '\0')
		_print_rev_recursion(s++);
	if (**c == *s)
	{
		_putchar(**c);
		_putchar('\n');
	}
	else
		_putchar(*(s - 1));
}
