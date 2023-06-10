#include <stdio.h>
/**
 * main - prints all arguements.
 * @argv: arguements to print
 * @argc: number of arg.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
