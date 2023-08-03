#include "main.h"
/**
 * flip_bits - counts number of bits that change from 1 number
 * to another
 * @m: the first number
 * @n: the second number
 * Return: the number of bits that change.
*/
unsigned int flip_bits(unsigned long int m, unsigned long int n)
{
	unsigned long int bytes = sizeof(long int) * 8;
	unsigned long int bit = 1;
	unsigned int num = 0;

	for (bit = bit << (bytes - 1); bit; bit = bit >> 1)
	{
		if ((m & bit) && (n & bit))
			continue;
		if (!(m & bit) && !(n & bit))
			continue;
		if ((!(m & bit) && (n & bit)) || ((m & bit) && !(n & bit)))
			num++;
	}
	return (num);

}
