#include "main.h"
#include <stdlib.h>
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
	int neg;

	if (x < 0)
	{
		neg = x * -1;
		last = neg % 10;
	}
	else
		last = x % 10;
	_putchar('0' + last);
	return (last);
}
