#include "main.h"
/**
 * print_binary - print's the binary code of a number
 * @n: the number.
 * Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned long int bytes = sizeof(long int) * 8, lid_0 = 1;
	unsigned long int byte1 = 1;

	for (byte1 = byte1 << (bytes - 1); byte1; byte1 = byte1 >> 1)
	{
		if ((n & byte1) && lid_0)
			lid_0 = 0;
		if (!lid_0)
			_putchar(((n & byte1) ? 1 : 0) + '0');
	}

	if (lid_0)
		_putchar('0');

}
