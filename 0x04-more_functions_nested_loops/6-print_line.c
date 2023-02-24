#include "main.h"
/**
 * print_line - prints a line on the terminal
 * @n: number of dash line
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{

		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
