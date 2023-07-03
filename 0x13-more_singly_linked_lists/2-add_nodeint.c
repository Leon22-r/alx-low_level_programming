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
	listint_t *temp;

	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
			return (NULL);
		new = malloc(sizeof(listint_t));
		new->n = n;
		new->next = NULL;
		*head = new;
		return (new);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;
	temp = *head;
	*head = new;
	free(temp);
	return (new);
}
