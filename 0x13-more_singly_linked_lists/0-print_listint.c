#include "lists.h"
/**
 * print_listint - prints a list that contains integers.
 * @h: the list
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t a = 1;
	size_t x = 0;

	if (h == NULL)
		return (x);
	printf("%d\n", h->n);
	if (h->next == NULL)
		return (a);
	return (a + print_listint(h->next));
}
