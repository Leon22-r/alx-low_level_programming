#include "main.h"
/**
 * _isupper - deterimies whether the character is an uppercase lettter.
 * @c: charater to determine.
 *
 * Return: 0 if not uppercase and 1 if upper.
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
