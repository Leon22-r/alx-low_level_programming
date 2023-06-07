#include "main.h"
/**
 * _pow_recursion - find the power of x raised to power y.
 * @x: number.
 * @y: power.
 * Return: power.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
