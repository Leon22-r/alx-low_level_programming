#include "main.h"

/**
 * print_to_98 - print from whatever number is passed upto 98.
 * @n: number to be counted from.
 *
 * Return: void.
 */

void print_to_98(int n)
{
	int x;

	x = n;
	if (n <= 98 && n >= 0)
	{
		for (x = n; x <= 98; x++)
		{
			if (x < 10)
			{
				_putchar('0' + x);
				_putchar(',');
				_putchar(' ');
			}
			else if (x >= 10 && x != 98)
			{
				_putchar('0' + x / 10);
				_putchar('0' + x % 10);
				_putchar(',');
				_putchar(' ');
			}
			else if (x == 98)
			{
				_putchar('0' + x / 10);
				_putchar('0' + x % 10);
				_putchar('\n');

			}
		}
	}
	else if (n > 98)
	{
		more_than(x);
	}
	else if (n < 0)
	{
		less_than(x);
	}
}

/**
 * more_than - prints numbers more than 98.
 * @n: the number
 *
 * Return: void.
 */

void more_than(int n)
{
	int x;
	int y;

	for (x = n; x >= 98; x--)
	{
		if (x < 100 && x != 98)
		{
			_putchar('0' + x / 10);
			_putchar('0' + x % 10);
			_putchar(',');
			_putchar(' ');
		}
		else if (x >= 100)
		{
			_putchar('0' + x / 100);
			y = x % 100;
			_putchar('0' + y / 10);
			_putchar('0' + y % 10);
			_putchar(',');
			_putchar(' ');
		}
		else if (x == 98)
		{
			_putchar('0' + x / 10);
			_putchar('0' + x % 10);
			_putchar('\n');
		}
	}
}
/**
 * less_than - prints numbers less than 98.
 * @n: first number.
 *
 * Return: void.
 */
void less_than(int n)
{
	int x;

	x = -n; 
	if (x < 100)
	{
		for (x = -n; x > 0; x--)
		{
			if (x >= 10)
			{
				_putchar('-');
				_putchar('0' + x / 10);
				_putchar('0' + x % 10);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('-');
				_putchar('0' + x % 10);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	for (x = 0; x <= 98; x++)
	{
		if (x < 10)
		{
			_putchar('0' + x);
			_putchar(',');
			_putchar(' ');
		}
		else if (x >= 10 && x != 98)
		{
			_putchar('0' + x / 10);
			_putchar('0' + x % 10);
			_putchar(',');
			_putchar(' ');
		}
		else if (x == 98)
		{
			_putchar('0' + x / 10);
			_putchar('0' + x % 10);
			_putchar('\n');
		}
	}
}
