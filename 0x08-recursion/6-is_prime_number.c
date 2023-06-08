#include "main.h"
/**
 * is_prime_number - determines if a number is prime.
 * @n: the number.
 * Return: 1 if prime and 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (recursion(n, 2));
}
/**
 * recursion - recursively determines a prime number.
 * @x: the number.
 * @y: used to determine.
 * Return: 1 if prime and 0 otherwise.
 */
int recursion(int x, int y)
{
	if ((x % y) == 0)
		return (1);
	if ((y * y) > x)
		return (0);
	return (recursion(x, y + 1));
}
