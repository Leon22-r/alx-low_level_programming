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

	if (*head != NULL)
	{
		x = (*(head))->n;
		free(*(head));
		return (x);
	}
	return (0);
}
