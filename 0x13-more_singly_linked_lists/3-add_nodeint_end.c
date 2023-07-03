#include "lists.h"
/**
 * add_nodeint_end - add a node to the end
 * @head: pointer to the list
 * @n: the integer in the new list
 * Return: the new list.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	if (*head == NULL)
	{
		new = malloc(sizeof(listint_t));
		new->n = n;
		new->next = NULL;
		*head = new;
		return (new);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	(*(head))->next = new;
	
	return (new);
}
