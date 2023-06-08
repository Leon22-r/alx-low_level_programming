#include "main.h"
/**
 * _sqrt_recursion - find the sqrt of a number.
 * @n: the number.
 * Return: square root of n of -1 if no square root.
 */
int _sqrt_recursion(int n)
{
	return (recursion(n, 2));

}
/**
 * recursion - find the square root.
 * @x: the number.
 * @y: what to divide.
 * Return: square root or 0.
 */
int recursion(int x, int y)
{
	if (x / y == y && x % y == 0)
		return (y);
	recursion(x, y + 1);
	if (y >= x)
		return (-1);
}
