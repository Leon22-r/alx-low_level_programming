#include "main.h"

/**
 * times_table - print times table.
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int num;
	int y;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 10; num++)
		{
			y = num * i;
			if (num == 9)
			{
				last(y);
			}
			else if (y < 10)
			{
				less_10(y, num, i);
			}
			else if (y >= 10)
			{
				_putchar('0' + y / 10);
				_putchar('0' + y % 10);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

/**
 * last - printing the last value.
 * @x: last value.
 * Return: void
 */
void last(int x)
{
	if (x < 10)
	{
		_putchar('0' + x);
		_putchar('\n');

	}
	else
	{
		_putchar('0' + x / 10);
		_putchar('0' + x % 10);
		_putchar('\n');
	}
}
/**
 * less_10 - if it's less than 10.
 * @x: number to print
 * @y: the line
 * @l: the number to multiply
 *
 * Return: void.
 */
void less_10(int x, int y, int l)
{
	int m;

	m = (y + 1) * l;
	if (m >= 10)
	{
		_putchar('0' + x);
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		_putchar('0' + x);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
}
