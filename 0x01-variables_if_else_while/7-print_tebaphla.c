#include <stdio.h>
/**
 * main - print letters in reverse
 * Return: 0 success
 */

int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
