#include "lists.h"
/**
 * reverse_listint - reverses the list
 * @head: the list
 * Return: pointer to the new list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = next;
	}
	*head = temp;
	return (*head);
}
