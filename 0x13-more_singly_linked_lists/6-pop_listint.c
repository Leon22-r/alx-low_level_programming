#include "lists.h"
/**
 * pop_listint - delete's the head node of a list
 * and returns the number in the node
 * @head: the node.
 * Return: the number in the node
*/
int pop_listint(listint_t **head)
{
	int x;
	listint_t *temp;

	if (*head != NULL)
	{
		x = (*(head))->n;
		temp = *head;
		*head = (*(head))->next;
		free(temp);
		return (x);
	}
	return (0);
}
