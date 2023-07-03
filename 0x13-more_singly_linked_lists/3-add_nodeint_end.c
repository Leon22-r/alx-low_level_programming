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
		if (new == NULL)
			return (NULL);
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
	(last_node(*head)->next) = new;

	return (new);
}

/**
 * last_node - finds the last node of a list
 * @first: the list
 * Return: the last node of a list
*/
listint_t *last_node(listint_t *first)
{
	if (first == NULL)
		return (NULL);
	if (first->next == NULL)
		return (first);
	return (last_node(first->next));
}
