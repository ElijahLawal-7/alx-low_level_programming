#include "lists.h"

/**
 * sum_dlistint - sum of all nodes of doubly linkedlist
 * @head: doubly linkedlist
 * Return: return the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int acumm = 0;

	if (!head)
		return (0);

	while (head)
	{
		acumm += head->n;
		head = head->next;
	}

	return (acumm);
}
