#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverses a string
 * @s: pointer of string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int index;
	char temporary;

	for (index = 0; index < _strlen(s) / 2; index++)
	{
		temporary = s[index];
		s[index] = s[_strlen(s) - (index + 1)];
		s[_strlen(s) - (index + 1)] = temporary;
	}
}
