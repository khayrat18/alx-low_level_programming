#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to elements
 * @idx: index of the list where the new node should be added
 * @n: data of elements
 *
 * Return: returns address of new node, otherwise NULL
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *current = *head;
	unsigned int j;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	return (NULL);

	newnode->next = NULL;
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (j = 0; j < idx - 1 && current != NULL; j++)
		current = current->next;
	if (current == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = current->next;
	current->next = newnode;

	return (newnode);
}
