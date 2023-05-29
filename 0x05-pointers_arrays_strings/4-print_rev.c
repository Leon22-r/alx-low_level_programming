#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: pointer to string.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int y;
	int a;

	a = 0;
	for (y = 0; s[y] != '\0'; y++)
	{
		a++;
	}
	for (y = -a; y != 0; y++)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
