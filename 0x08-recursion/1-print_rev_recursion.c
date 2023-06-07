#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: the string.
 * Return: void .
 */
void _print_rev_recursion(char *s)
{
	char **c = &s;
	char *x = s;

	if (*s != '\0')
		_print_rev_recursion(x++);
	if (**c == *x)
	{
		_putchar(**c);
	}
	else
		_putchar(*(x - 1));
}
