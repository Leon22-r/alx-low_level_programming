#include "main.h"
/**
 * cap_string - every word starts with caps.
 * @s: the string.
 *
 * Return: new string.
 */
char *cap_string(char *s)
{
	char *r;

	r = s;
	while (*s != '\0')
	{
		if (*s == '\n' || *s == ' ' || *s == '.' || *s == ',' || *s == '\t')
		{
			if (*(s + 1) >= 'a' && *(s + 1) <= 'z')
			{
				s[1] = s[1] - 32;
			}
		}
		if (*s == ';' || *s == '!' || *s == '?' || *s == '"' || *s == '(')
		{
			if (*(s + 1) >= 'a' && *(s + 1) <= 'z')
			{
				s[1] = s[1] - 32;
			}
		}
		if (*s == ')' || *s == '{' || *s == '}')
		{
			if (*(s + 1) >= 'a' && *(s + 1) <= 'z')
			{
				s[1] = s[1] - 32;
			}
		}
		s++;
	}
	return (r);
}
