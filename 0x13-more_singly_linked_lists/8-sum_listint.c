#include "lists.h"
/**
 * sum_listint - sums up all integers in the list
 * @head: the list.
 * Return: the sum of the list
*/
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	if (head->next == NULL)
		return (head->n);
	return (head->n + sum_listint(head->next));
}
