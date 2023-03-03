#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int x;
	int y;
	int i;
	int a;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			for (x = ; x > 0; x--)
			{
				_putchar(' ');
			}
			for (y = 0; y >= i; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
