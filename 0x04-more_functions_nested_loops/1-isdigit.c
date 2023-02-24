#include "main.h"
/**
 * _isdigit - returns 1 if c is a digit
 * @c: the input being investigated
 * Return: 0 success
 */

int _isdigit(int c)
{
	if (c >= 0 || c <= 9)
		return (1);
	else
		return (0);
}
