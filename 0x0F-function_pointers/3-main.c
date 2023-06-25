#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - calculates
 * @agrv: number of arguements
 * @argc: the numbers
 * Return: answer.
 */
int main(int argv, char *argc[])
{
	int num1, num2, result, (*fn)(int, int);

	if (argv != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argc[1]);
	num2 = atoi(argc[3]);

	if ((*argc[2] == '/' && argc[3] == 0) || (*argc[2] == '%' && argc[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}
	fn = get_op_func(argc[2]);
	if (fn == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = fn(num1, num2);
	printf("%d\n", result);
	return (0);
}
