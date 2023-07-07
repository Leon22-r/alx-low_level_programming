#include "main.h"
/**
 * set_bit - sets the bit at index to 1
 * @n: the number
 * @index: the index
 * Return: 1 on success and -1 on failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	bit = bit << index;
	*n = *n | bit;
	if (*n)
		return (1);
	else
		return (0);

}
