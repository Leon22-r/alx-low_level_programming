#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print all numbers except 4 and 2
 * Return: void
 */

void print_most_numbers(void)
{
	int c;
	int f;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		f = (c % 10 + '0');
		_putchar(f);
	}
	_putchar('\n');
}
