#include "lists.h"
/**
 * print_list - prints string in the singly list.
 * @h: pointer to the list.
 * Return: number of node in the list
*/
size_t print_list(const list_s *h)
{
	if (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
	}
	if (h->next != NULL)
		return (1 + print_list(h->next));
	if (h->next == NULL)
		return (0);
}