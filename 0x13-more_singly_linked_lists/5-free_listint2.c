#include "lists.h"
/**
 * free_listint2 - free in a unique way
 * @head: a pointer to the list.
*/
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	if ((*(head))->next == NULL)
	{
		free(*(head));
		return;
	}
	free_listint2((*(head))->next);
	free(*head);
	*head == NULL;
}

