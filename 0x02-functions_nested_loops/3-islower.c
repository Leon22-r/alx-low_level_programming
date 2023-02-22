#include "main.h"
/**
 * _islower - entry point
 * Description: returns 1 if c is a lowercase letter if not it returns 0
 * Return: returns 1 or 0
 */

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
