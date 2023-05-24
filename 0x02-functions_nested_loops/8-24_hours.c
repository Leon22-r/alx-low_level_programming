#include "main.h"

/**
 * jack_bauer - all hours of the day.
 *
 * Return: 0.
 */

void jack_bauer(void)
{
	int hours;
	int min;

	for (hours = 0; hours < 24; hours++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);
			_putchar(':');
			_putchar('0' + min / 10);
			_putchar('0' + min % 10);
			_putchar('\n');

		}
	}
}
