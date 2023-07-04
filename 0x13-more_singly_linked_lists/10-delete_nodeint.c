#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at a certain
 * index
 * @head: the list
 * @index: the index
 * Return: 1 on success and -1 on failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *h;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*(head))->next;
		free(temp);
		return (1);
	}
	if (index >= len(*head))
		return (-1);	
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (-1);
	
	h = *head;
	while (i != (index - 1))
	{
		temp = h->next;
		h = temp;
		i++;
	}
	temp = h->next;
	h->next = h->next->next;
	return (1);
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
