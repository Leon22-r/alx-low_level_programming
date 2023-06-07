#include "main.h"
/**
 * factorial - finds the factorial of a number.
 * @n: the number.
 * Return: the factorial of n or -1 if less than 0.
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
