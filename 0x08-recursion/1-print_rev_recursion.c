#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: the string.
 * Return: void .
 */
void _print_rev_recursion(char *s)
{
	char *x = s;

	if (*s != '\0')
	{
		x++;
		_print_rev_recursion(x);
	}
		_putchar(*(x - 1));
}
