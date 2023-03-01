#include "main.h"
/**
 * swap_int - it swap int 1 and 2
 * @a: int 1
 * @b: int 2
 */
void swap_int(int *a, int *b)
{
	int placeholder = *a;
	int placeholder2 = *b;

	*a = placeholder2;
	*b = placeholder;
}
