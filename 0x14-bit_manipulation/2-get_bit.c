#include "main.h"
/**
 * get_bit - get's the bit of the specified index.
 * @n: the number
 * @index: the index to get the bit
 * Return: number at specified index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int y = 1;

	y = y << index;
	if (n & y)
		return (1);
	else
		return (0);
	return (-1);
}
