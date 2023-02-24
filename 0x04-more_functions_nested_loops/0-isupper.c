#include "main.h"

/**
 * _isupper - entry point and returns 1 or 0
 * @c: input to be checked
 * Description: returns 1 or 0
 * Return: returns 1 if c is an capital letter and 0 if it is a small letter
 */

int _isupper(int c)
{
	if (c == 'A' || c <= 'Z')
		return (1);

	else
		return (0);
}
