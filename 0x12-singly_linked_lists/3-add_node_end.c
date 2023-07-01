#include "lists.h"
/**
 * add_node_end - adds a node to the end of a list.
 * @head: the list.
 * @str: the string to store in the list.
 * Return: address of the new element.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	char *string = "(nil)";
	int len = 0, i = 0;
	list_t *new;

	if (str != NULL)
	{
		string = strdup(str);
		while (string[i] != '\0')
		{
			len++;
			i++;
		}
	}
	new = malloc(sizeof(list_t));
	new->len = len;
	new->str = string;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
		*head = new;
		return (new);
	}
	last_elem(*head)->next = new;
	return (new);
}

/**
 * last_elem moves upto the last element of list
 * @head: the list.
 * Return: address of the last element.
 * 
*/
list_t *last_elem(list_t *head)
{
	if (head->next == NULL)
		return (head);
	if (head == NULL)
		return (NULL);
	return (last_elem(head->next));
}
