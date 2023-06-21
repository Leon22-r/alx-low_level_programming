#include "function_pointer.h"
#include <stddef.h>
/**
 * print_name - prints a name according to function called-back
 * @name: the name.
 * @f: pointer to the function needed.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
	else 
		return;
}
