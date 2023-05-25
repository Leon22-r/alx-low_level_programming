#include "main.h"
/**
 * _isdiigit - determines whether the character is a digit.
 * @c: the character.
 *
 * Return: 1 if it's a digit and 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
