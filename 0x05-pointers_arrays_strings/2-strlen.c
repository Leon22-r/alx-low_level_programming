#include "main.h"
/**
 * _strlen - length of a string
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{}
	return (index);
}
