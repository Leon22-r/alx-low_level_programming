#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: the binary code
 * Return: the unsigned integer or 0 if it's equal to NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			x *= 2;
			x += *b - '0';
			b++;
		}
		else
			return (0);
	}
	return (x);

}
