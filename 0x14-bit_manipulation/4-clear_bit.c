#include "main.h"
/**
 * clear_bit - sets the specified index to 0.
 * @n: the number
 * @index: the index
 * Return: 1 if successful and -1 if fails
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index > ((sizeof(long int) * 8)))
		return (-1);
	bit = bit << index;
	*n = *n | bit;
	*n = *n ^ bit;
	return (1);
}
