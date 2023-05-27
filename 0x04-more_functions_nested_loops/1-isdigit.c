#include "main.h"
/**
 * _isdiigit - determines whether the character is a digit.
 * @c: the character.
 *
 * Return: 1 if it's a digit and 0 otherwise.
 */
int _isdigit(int c)
{
	int x;

	x = c;
	if (x >= 0 && x <= 9)
		return (1);
	else
		return (0);
}
