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
	int sum = 0, i;
	

	for (i = 1; i < argc; i++)
	{
		if (argv[i][0] >= '0' && argv[i][0] <= '9')
		{
			sum += _atoi(argv[i]);
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
int _atoi(char *c)
{
	int result = 0;

	while (*c)
	{
		result = result * 10 + (*c - '0');
		c++;
	}
	return (result);
}
