#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints desired numbers.
 * @separator: symbol to separate the numbers.
 * @n: number of arguements.
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
