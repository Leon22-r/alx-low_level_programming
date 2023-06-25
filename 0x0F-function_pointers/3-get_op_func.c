#include "3-calc.h"
#include <stddef.h>
#include <string.h>
/**
 * get_op_func - selects the desired function.
 * @s: the symbol required to select
 * @a: 1st number
 * @b: 2nd number
 * Return: answer.
 */
int (*get_op_func(char *s))(int a, int b)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
