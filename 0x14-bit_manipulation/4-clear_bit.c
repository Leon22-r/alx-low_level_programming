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

	bit = bit << index;
	*n = *n ^ bit;
	if (!(bit & *n))
		return (1);
	return (-1);
}
