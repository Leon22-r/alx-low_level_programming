#include "main.h"
/**
 * main - write's the program's name.
 * @argc: the number of arguements.
 * @argv: pointers to the strings passed.
 * Return: 0 
 */
int main(int argc, char *agrv[])
{
	char name[] = argv[0];
	int i;

	for (i = 0; name[i] != '\0'; i++)
	{
		_putchar(name[i]);
	}
	return (0);
}
