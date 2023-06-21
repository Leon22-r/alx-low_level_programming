#include "3-calc.h"
#include <stddef.h>
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

	if (*s != '+' || *s != '-' || *s != '*' || *s != '/' *s != '%')
		return (NULL);
	while (s)
	{
	
	}
}
