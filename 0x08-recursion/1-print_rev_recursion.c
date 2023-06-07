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
	if (*s == *x)
	{
		_putchar(*s);
	}
	else
		_putchar(*(x - 1));
}
