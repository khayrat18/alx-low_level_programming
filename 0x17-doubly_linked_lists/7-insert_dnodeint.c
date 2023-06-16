#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointre to pointer of head node
 * @idx: position of new node
 * @n: value of new node
 * Return: returns new_node, otherwise null
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current  = *h;
	dlistint_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->next = new_node;
		*h = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	if (i < idx - 1 || current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
