#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: the string pointer
 * Return: viod
 */
void print_rev(char *s)
{
	int index;

	for (index = _strlen(s) - 1; index >= 0; index--)
	{
		_putchar(*(s + index));
	}
	_putchar('\n');
}
