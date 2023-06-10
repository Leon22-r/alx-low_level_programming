#include <stdio.h>
#include "main.h"
/**
 * main - multiplies two numbers.
 * @argc: n.o arguements
 * @argv: arguements.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n, i;

	if (argc != 3)
		return (1);
	n = _atoi(argv[1]);
	i = _atoi(argv[2]);
	printf("%d\n", n * i);
	return (0);
}
/**
 * _atoi - converts character to integers.
 * @c: the number to change.
 * Return: 0.
 */

int _atoi(char *c)
{
	int sign = 1, result = 0;

	if (*c == '-')
	{
		sign = -1;
		c++;
	}
	while (*c)
	{
		result = result * 10 + (*c - '0');
		c++;
	}
	return (result * sign);
}
