#include <stdio.h>

/**
 * main - print both small and capital letters
 * Return: 0 success
 */

int main(void)
{
	char a;
	char c;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
