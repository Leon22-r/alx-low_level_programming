#include "main.h"
/**
 * puts_half - prints the last half of a string.
 * @str: pointer to the string.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int a;
	int y;

	y = 0;
	for (a = 0; *(str + a) != '\0'; a++)
	{
		y++;
	}
	if (y % 2 == 0)
	{
		for (a = 0; a < y; a++)
		{
			if (a >= y / 2)
				_putchar(*(str + a));

		}
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < y; a++)
		{
			if (a >= (y + 1) / 2)
				_putchar(*(str + a));
		}
		_putchar('\n');
	}
}
