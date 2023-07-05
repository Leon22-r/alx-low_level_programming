#include "lists.h"
/**
 * add_nodeint - add's a node at the beginning of a
 * list
 * @head: the list
 * @n: the number in the list.
 * Return: pointer to the list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);	
}
