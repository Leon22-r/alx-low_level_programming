#include "lists.h"
/**
 * reverse_listint - reverses the list
 * @head: the list
 * Return: pointer to the new list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *temp2 = NULL;
	listint_t *new = *head;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (new != NULL)
	{
		temp = new->next;
		new->next = temp2;
		temp2 = new;
		new = temp;
	}
	*head = temp2;
	return (temp2);
}

