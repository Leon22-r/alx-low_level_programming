#include "main.h"

/**
 * print_most_numbers - print all numbers except 4 and 2
 * Return: void
 */

void print_most_numbers(void)
{
	char num = 0;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		_putchar('num');
		_putchar('\n');
	}
}
