#include "lists.h"
/**
 * list_len - lenght of a list.
 * @h: the list.
 * Return: length of a list.
*/
size_t list_len(const list_t *h)
{
	size_t a = 1;
	size_t x = 0;
	
	if (h == NULL)
		return (x);
	if (h->next == NULL)
		return (a);
	return (a + list_len(h->next));
}