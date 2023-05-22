#include <stdio.h>
/**
 * main - print numbers of base 16.
 *
 * Return: 0.
 */
int main(void)
{
	int chr;

	for (chr = '0'; chr <= '9'; chr++)
	{
		putchar(chr);
	}
	for (chr = 'a'; chr <= 'f'; chr++)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
