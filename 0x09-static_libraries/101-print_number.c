#include "main.h"
void less_than(int n);
/**
 * print_number - prints numbers using _putchar.
 * @n: number to print.
 *
 * Return: void.
 */
void print_number(int n)
{
	if (n >= 0)
	{
		if (n < 10)
			_putchar(n + '0');
		else if (n < 100 && n > 9)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else if (n >= 100 && n < 1000)
		{
			_putchar(n / 100 + '0');
			n = n / 100;
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');

		}
		else if (n >= 1000)
		{
			_putchar(n / 1000 + '0');
			n = n / 1000;
			_putchar(n / 100 + '0');
			n = n / 100;
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');

		}
		_putchar('\n');
	}
	else
		less_than(n);
}
/**
 * less_than - print numbers less than 0.
 * @n: number.
 * Return: void.
 */
void less_than(int n)
{
		n = n * -1;
		_putchar('-');
		if (n < 10)
			_putchar(n + '0');
		else if (n < 100 && n > 9)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else if (n >= 100 && n < 1000)
		{
			_putchar(n / 100 + '0');
			n = n / 100;
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');

		}
		else if (n >= 1000)
		{
			_putchar(n / 1000 + '0');
			n = n / 1000;
			_putchar(n / 100 + '0');
			n = n / 100;
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');

		}
		_putchar('\n');

}
