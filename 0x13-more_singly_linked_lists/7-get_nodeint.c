#include "lists.h"
/**
 * get_nodeint_at_index - gives the node at a certain index
 * @head: the list
 * @index: the index.
 * Return: the node at the specified index.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *h;

	if (head == NULL)
		return (NULL);
	if (index >= len(head))
		return (NULL);
	temp = malloc(sizeof(listint_t));
	h = malloc(sizeof(listint_t));
	if (h == NULL || temp == NULL)
		return (NULL);
	h = head;
	while (i != index)
	{
		temp = h->next;
		h = temp;
		i++;
	}
	head = h;
	return (head);
}

/**
 * len - number of nodes in a list
 * @h: the list
 * Return: size of the list
 */
unsigned int len(listint_t *h)
{
	unsigned int i = 0;
	unsigned int a = 1;

	if (h == NULL)
		return (i);
	if (h->next == NULL)
		return (a);
	return (1 + len(h->next));
}
