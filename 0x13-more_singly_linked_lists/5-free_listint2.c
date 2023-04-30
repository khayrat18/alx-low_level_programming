#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head:pointer to nodes
 * Return: returns nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *new_node;
		
	if (head ==NULL)
		return;
	while (current != NULL)
	{
		new_node = current->next;
		free(current);
		current = new_node;
	}
	*head = NULL;
}
