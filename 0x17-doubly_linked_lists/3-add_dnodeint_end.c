#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: doubly linkedlist
 * @n: value of node
 * Return: all the linkedlist
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *actual;

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;

	if (!(*head))
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		actual = *head;

		while (actual->next)
			actual = actual->next;

		new_node->next = NULL;
		new_node->prev = actual;
		actual->next = new_node;
	}

	return (new_node);

}
