#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints any kind of charater: number, character or string
 * @format: it's format.
 * Return: void.
*/
void print_all(const char * const format, ...)
{
	va_list(all);
	int i = 0, k;
	char *string, *sep = "";

	if (format)
	{
		va_start(all, format);
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", sep, va_arg(all, int));
				break;
			case 'i':
				k = va_arg(all, int);
				printf("%s%d", sep, k);
				break;
			case 'f':
				printf("%s%f", sep, va_arg(all, double));
				break;
			case 's':
				string = va_arg(all, char *);
				printf("%s%s", sep, string);
				break;
			default:
				i++;
				continue;
			}
			i++;
			sep = ", ";
		}
		printf("\n");
		va_end(all);
	}
}
