#include "main.h"
/**
 * print_numbers - entry point of the code
 * Return: void
 */

void print_numbers(void)
{
	char c;
	int num;

	for (num = 0; num <= 9; num++)
	{
		c = (num % 10 + '0');
		_putchar(c);
	}
	_putchar('\n');
}
