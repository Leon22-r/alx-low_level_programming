#include <stdio.h>
#include "main.h"

/**
 * _isupper = returns 1 or 0
 * @c: input to be checked
 * Return: returns 1 if c is an capital letter and 0 if it is a small letter
 */

int _isupper(int c)
{
	if ( c == 'A'; c <= 'Z' )
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		putchar('0' + 0);
		_putchar('\n');
	}
	else 
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		_putchar('0' + 1);
		_putchar('\n');
	}
	return (0);
}
