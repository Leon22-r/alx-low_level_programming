#include "main.h"
/**
 * print_binary - print's the binary code of a number
 * @n: the number.
 * Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned long int bytes = sizeof(long int) * 8, unwanted_zero = 1;
	unsigned long int byte = 1;

	for (byte = byte << (bytes - 1); byte; byte = byte >> 1)
	{
		if ((n & byte) && unwanted_zero)
			unwanted_zero = 0;
		if (!unwanted_zero)
			_putchar(((n & byte) ? '1' : '0'));
	}
	if (unwanted_zero)
		_putchar('0');
}
