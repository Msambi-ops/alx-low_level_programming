#include "lists.h"

/**
 * free_listint - the function frees a linked list
 * @head: this is listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

