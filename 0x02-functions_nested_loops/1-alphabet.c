#include <stdio.h>
#include "main.h"
/**
 * main - printing the alphabet using _putchar
 *
 * Return: 0.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
