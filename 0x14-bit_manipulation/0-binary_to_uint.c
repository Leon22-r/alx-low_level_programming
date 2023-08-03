#include "main.h"
/**
 * binary_to_uint - converts binary to numbers
 * @b: the binary code.
 * Return: the number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			num *= 2;
			num += *b - '0';
			b++;
		}
		else
			return (0);
	}
	return (num);
}
