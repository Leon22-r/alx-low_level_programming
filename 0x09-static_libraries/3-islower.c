#include "main.h"
/**
 * _islower - determine whether is a lowercasse letter.
 * @c: contains number to be determined.
 *
 * Return: 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
