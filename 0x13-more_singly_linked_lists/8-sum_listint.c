#include "lists.h"

/**
 * sum_listint - the funct calculates the sum of all the
 * data in a listint_t list.
 * @head: the first node in the linked list.
 *
 * Return: returns resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
