#include "lists.h"
/**
 * add_node - it adds a node to the beginning of a list.
 * @head: the list
 * @str: the string to store.
 * Return: a pointer to the new element.
*/
list_t *add_node(list_t **head, const char *str)
{
	char *string_added = "(nil)";
	int i = 0, len = 0;
	list_t *temp, *new;

	if (str != NULL)
	{
		string_added = strdup(str);
		while (string_added[i] != '\0')
		{
			len++;
			i++;
		}
	}
	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new->len = len;
		new->str = string_added;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	temp = malloc(sizeof(list_t));
	temp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->len = len;
	new->str = string_added;
	new->next = *head;

	*head = new;
	free(temp);
	return (*head);
}
