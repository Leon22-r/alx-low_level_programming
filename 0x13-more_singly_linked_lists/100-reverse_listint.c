#include "lists.h"
/**
 * reverse_listint - reverses the list
 * @head: the list
 * Return: pointer to the new list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp2;

	if (head == NULL || *head == NULL)
		return (NULL);
	
	temp = NULL;
	temp2 = NULL;

	while (*head != NULL)
	{
		temp = (*(head))->next;
		(*(head))->next = temp;
		temp2 = (*head);
		*head = temp;
	}
	*head = temp;
	return (temp);
}

