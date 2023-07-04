#include "lists.h"
/**
 * free_listint2 - free in a unique way
 * @head: a pointer to the list.
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL || head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*(head))->next;
		free(temp);
	}
	*head = NULL;
}
