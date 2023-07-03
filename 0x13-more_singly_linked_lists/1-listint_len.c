#include "lists.h"
/**
 * listint_len - counts number of nodes
 * @h: the list
 * Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	size_t a = 1;
	if (h == NULL)
		return (n);
	if (h->next == NULL)
		return (a);
	return (a + listint_len(h->next));
}