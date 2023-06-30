#include "lists.h"
/**
 * print_list - prints string in the singly list.
 * @h: pointer to the list.
 * Return: number of node in the list
*/
size_t print_list(const list_t *h)
{
	size_t a = 1;
	size_t x = 1;

	if (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
	}
	if (h->next == NULL)
		return (x);
	return (a + print_list(h->next));
}
