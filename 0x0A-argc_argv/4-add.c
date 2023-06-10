#include <stdio.h>
#include "main.h"
/**
 * main - adds numbers
 * @argv: the numbers.
 * @argc: number of numbers.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, n;


	for (i = 1; i < argc; i++)
	{
		if (argv[i][0] >= '0' && argv[i][0] <= '9')
		{
			n = _atoi(argv[i]);
			if (n == 123456789)
			{
				printf("Error\n");
				return (1);
			}
			sum += n;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
/**
 * _atoi - changes a character to an integer.
 * @c: the character.
 * Return: the number.
 */
int _atoi(char *c)
{
	int result = 0;

	while (*c)
	{
		if (*c >= '0' && *c <= '9')
		{
			result = result * 10 + (*c - '0');
			c++;
		}
		else
		{
			return (123456789);
		}
	}
	return (result);
}
