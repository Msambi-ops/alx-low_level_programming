#include "lists.h"

/**
 * get_nodeint_at_index - the funct returns the node at a certain
 * index in a linked list
 * @head:this is the  first node in the linked list.
 * @index: the index of the node to return.
 *
 * Return: returns a pointer to the node we're looking for, or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp ? tmp : NULL);
}
