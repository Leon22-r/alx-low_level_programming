#include "main.h"
/**
 * main - write's the program's name.
 * @argc: the number of arguements.
 * @argv[]: pointers to the strings passed.
 * Return: 0
 */
int main(int argc, char *agrv[] __attribute__((unused)))
{
	(void) agrc;

	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');
	return (0);
}
