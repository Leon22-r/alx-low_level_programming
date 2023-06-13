#include "main.h"

/**
 * _puts - prints out the string .
 * @str: pointer for the string.
 *
 * Return: void.
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
