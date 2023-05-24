#include "main.h"

/**
 * print_to_98 - print from whatever number is passed upto 98.
 * @n: number to be counted from.
 *
 * Return: void.
 */

void less_than_0(int x);

void print_to_98(int n)
{
	int x;

	if (n < 98 && n >= 0)
	{
		for (x = n; x <= 98; x++)
		{
			if (x < 10)
			{
				_putchar('0' + x);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + x / 10);
				_putchar('0' + x % 10);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			if (x < 100)
			{
				_putchar('0' + x / 10);
				_putchar('0' + x % 10);
				_putchar(',');
				_putchar(' ');
			}
			else if (x < 1000 && x > 100)
			{
				_putchar('0' + x / 100);
				_putchar('0' + x / 10);
				_putchar('0' + x % 10);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + x / 1000);
				_putchar('0' + x / 100);
				_putchar('0' + x / 10);
				_putchar('0' + x % 10);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		less_than_0(n);
	}
}

/**
 * lese_than_0 - print numbers that are less than 0.
 * @x: starting number
 *
 * Return: void.
 */
void less_than_0(int x)
{
	int y;

	y = x;
}
