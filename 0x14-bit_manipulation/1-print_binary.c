#include "main.h"
/**
 * print_binary - convert a number to binary.
 * @n: the number.
*/
void print_binary(unsigned long int n)
{
	unsigned long int bytes = sizeof(long int) * 8;
	unsigned long int byte = 1;
	long int zero = 1;

	for (byte = byte << (bytes - 1); byte; byte = byte >> 1)
	{
		if (zero && !(n & byte))
			continue;
		if (n & byte)
			_putchar('1');
		else
			_putchar('0');
		zero = 0;
	}
	if (zero)
		_putchar('0');
}
