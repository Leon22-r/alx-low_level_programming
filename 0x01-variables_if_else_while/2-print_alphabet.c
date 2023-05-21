#include <stdio.h>

/**
 * main - print the alphabet
 *
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
