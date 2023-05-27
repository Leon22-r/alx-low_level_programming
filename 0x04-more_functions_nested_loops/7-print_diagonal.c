#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: length of diagonal.
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int x;
	int y;

	x = n;
	if (x <= 0)
		_putchar('\n');
	else
	{
		for (y = 0; y < n; y++)
		{
			for (x = 0; x < y; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
