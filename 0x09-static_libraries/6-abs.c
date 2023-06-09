#include "main.h"

/**
 * _abs - returns the absolute value of an integer.
 * @n: the value
 *
 * Return: the absolute value.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
