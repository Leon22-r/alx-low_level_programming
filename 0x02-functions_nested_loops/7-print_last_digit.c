#include "main.h"

/**
 * print_last_digit - returns the last digit.
 * @x: the value
 *
 * Return: the last digit.
 *
 */
int print_last_digit(int x)
{
	int last;

	if (x < 0)
		last = -last;
	last = x % 10;
	_putchar(48 + last);
	return (last);
}
