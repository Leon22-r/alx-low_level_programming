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
	int num1, num2, result;

	if (argv != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argc[2] != '+' || argc[2] != '-' || argc[2] != '*' || argc[2] != '/' || argc[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argc[2] == '/' && argc[3] == '0') || (argc[2] == '%' && argc[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argc[1]);
	num2 = atoi(argc[3]);
	result = (get_op_func(agrc[2]))(num1, num2);
	return (result);
}
