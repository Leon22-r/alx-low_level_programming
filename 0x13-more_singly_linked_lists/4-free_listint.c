#include "lists.h"
/**
 * free_listint - free an integer list
 * @head: the list
 * Return: void
*/
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	free_listint(head->next);
	free(head);
}
