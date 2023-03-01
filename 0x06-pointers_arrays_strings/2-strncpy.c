#include "main.h"
/**
 * *_strncat - copies atmost an inputted number form src into dest
 * @src: the source string
 * @dest: the buffer storing the string copy
 * @n: the max number of bytes to copy from src
 * Return: pointer to the resulting spring dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0; src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);

