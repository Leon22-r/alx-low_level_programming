#include "main.h"
/**
 * clear_bit - sets the bit of a specific index to 0
 * @n: the number
 * @index: the index
 * Return: 1 on success and -1 otherwise
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	bit = bit << index;
	*n = *n | bit;
	*n = *n ^ bit;
	if (*n)
		return (1);
	else
		return (-1);
}
