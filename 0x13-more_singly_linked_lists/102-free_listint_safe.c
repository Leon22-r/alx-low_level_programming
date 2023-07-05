#include "lists.h"
/**
 * free_listint_safe - free's a list safely
 * @h: pointer to the list
 * Return: number of nodes in the list
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *temp;
	size_t i = 0;

	while (*h)
	{
		temp = *h;
		*h = (*(h))->next;
		free(temp);
		i++;
	}
	h = NULL;
	return (i);
}
