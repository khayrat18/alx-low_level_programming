#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to nodes
 * Return: returns nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *new_node;

	while (current != NULL)
	{
		new_node = current->next;
		free(current);
		current = new_node;
	}

}
