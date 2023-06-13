#include "main.h"
/**
 * atoi - change character into number.
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
			return (-1);
		}
	}
	return (result);
}
