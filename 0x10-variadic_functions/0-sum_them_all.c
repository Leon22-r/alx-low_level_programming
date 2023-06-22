#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all passed arguements.
 * @n: n.o arguements.
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum = 0;
	va_list ap;

	va_start(ap, n);
	for (a = 0; a < n; a++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
