#include "main.h"
/**
 * _isalpha - entry point
 * Descrption:
 * @c: received value
 * Return: 1 if true and 0 if false
 */

int _isalpha(int c)
{
	int try = 'a'

	for (try = 'a'; try <= 'Z'; ++try)
	{
		if (c == try)
		{
			return (1);
		}
	return (0);
	}
}
