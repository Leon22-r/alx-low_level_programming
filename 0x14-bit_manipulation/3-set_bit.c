#include "main.h"
/**
 * set_bit - sets the bit specified bit to 1
 * @n: the number to set.
 * @index: the index to set to 1.
 * Return: 1 if successful and -1 if an error occurred.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int byte = 1;

	byte = byte << index;
	*n = *n | byte;
	if (*n & byte)
		return (1);
	return (-1);
}
