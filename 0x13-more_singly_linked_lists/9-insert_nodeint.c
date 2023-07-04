#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at a
 * certain index.
 * @head: the list
 * @idx: index where the new node is to be added
 * @n: the number of the new list.
 * Return: address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *h, *new;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (NULL);
	if (len(*head) < idx)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	h = malloc(sizeof(listint_t));
	new = malloc(sizeof(listint_t));
	if (temp == NULL || h == NULL || new == NULL)
		return (NULL);
	h = *head;
	/*creating the new node*/
	new->n = n;
	new->next = NULL;
	/*iterating upto the index*/
	while (i != (idx - 1))
	{
		temp = h->next;
		h = temp;
		i++;
	}
	/*assigning the previous next to the new element*/
	temp = h->next;
	h->next = new;
	new->next = temp;

	return (new);
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
