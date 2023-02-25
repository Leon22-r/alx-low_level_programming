#include "main.h"

/**
 *print_alphabet_x10 - Entry point
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char s;

	while (i <= 9)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}

		_putchar('\n');

		i++;
	}
}
