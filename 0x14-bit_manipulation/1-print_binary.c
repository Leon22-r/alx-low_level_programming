#include "main.h"
/**
 * print_binary - print's the binary code of a number
 * @n: the number.
 * Return: void
*/
void print_binary(unsigned long int n)
{
	int x = sizeof(n) * 8 - 1;
	char c;

	while (x >= 0)
	{
		c = (n >> x) & 1;
		_putchar(c + '0');
		x--;
	}
}
