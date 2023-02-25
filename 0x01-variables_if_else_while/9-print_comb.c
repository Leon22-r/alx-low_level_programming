#include <stdio.h>
/**
 * main - all possible combinations of a number
 * Return: 0 success
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar((a % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
