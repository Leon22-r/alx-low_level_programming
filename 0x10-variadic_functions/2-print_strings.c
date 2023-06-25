#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings passed as arguements.
 * @separator: separator.
 * @n: number of arguements.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *s;
	unsigned int i;


	va_start(string, n);
	if (separator == NULL)
	{
		printf("\n");
		return;
	}
	for (i = 1; i <= n; i++)
	{
		s = va_arg(string, char *);
		if (!s)
			s = "(nil)";
		printf("%s", s);
		if (i != n)
			printf("%s", separator);
	}
	va_end(string);
	printf("\n");

}
