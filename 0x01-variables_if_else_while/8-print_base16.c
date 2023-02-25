#include <stdio.h>
/**
 * main - print numbers of base 16
 * Return: 0 success
 */
int main(void)
{
	int num;
	int letters;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
