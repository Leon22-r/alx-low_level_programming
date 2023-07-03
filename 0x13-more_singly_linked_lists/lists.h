#ifndef LISTS_H
#define LISTS_H
/*header files*/
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>
#include <limits.h>

/**
 * struct listint_s - singly linked list
 * @next: pointer to next node
 * @n: integer
 *
 * Description: singly linked node structure
*/
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/*functions prototypes*/
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif