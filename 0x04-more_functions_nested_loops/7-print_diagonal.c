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

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			if (x == (n - 1))
			{
				_putchar('\');
				_putchar('\n');
			}
			else
				_putchar(' ');
		}
	}
}
