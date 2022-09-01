#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: doubly linkedlist
 * @index: index to remove node
 * Return: 1 if removed, -1 if fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *actual = *head;
	unsigned int cnt;

	if (!head || !actual)
		return (-1);

	if (index == 0)
	{
		actual = actual->next;
		free(*head);
		*head = actual;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	for (cnt = 0; actual; cnt++)
	{
		if (cnt == index)
		{
			if (actual->next)
			{
				(actual->prev)->next = actual->next;
				(actual->next)->prev = actual->prev;
				free(actual);
				return (1);
			}
			else
			{
				(actual->prev)->next = NULL;
				free(actual);
				return (1);
			}
		}
		actual = actual->next;
	}

	return (-1);
}
