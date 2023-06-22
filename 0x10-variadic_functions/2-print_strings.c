#include <variadic_functions.h>
/**
 * print_strings - prints strings passed as arguements.
 * @separator: separator.
 * @n: number of arguements.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;

	va_start(string, n);
	for (i = 1; i <= n; i++)
	{
		printf("%s", va_arg(string, char *));
		if (i != n)
			printf("%s", separator);
	}
	va_end(string);
	printf("\n");

}
