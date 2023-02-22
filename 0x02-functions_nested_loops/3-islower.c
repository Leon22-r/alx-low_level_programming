#include "main.h"
/**
 * _islower - entry point
 * description:
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
