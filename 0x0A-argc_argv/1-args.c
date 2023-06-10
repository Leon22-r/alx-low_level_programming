#include <stdio.h>
/**
 * main - prints number of arguements passed.
 * @argv: pointer to arguements passed.
 * @argc: contains arguements passed.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
