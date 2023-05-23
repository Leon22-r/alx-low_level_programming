#include <stdio.h>
#include "main.h"
/**
 * main - printing the alphabet using _putchar
 *
 * Return: void.` 
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
