#include "lists.h"
/**
 * free_list - frees a list
 * @head: the list.
*/
void free_list(list_t *head)
{
	free(head->str);
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	free_list(head->next);
	free(head);
}
