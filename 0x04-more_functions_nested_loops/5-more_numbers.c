#include "main.h"
/**
 * more_numbers - print 1 to 14
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		}
	_putchar('\n');
	}
}
