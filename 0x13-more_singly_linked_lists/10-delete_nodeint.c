#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 *
 * @head: head pointer to elements
 * @index: index of node to be deleted
 *
 * Return: returns 1, otherwise -1
 */



int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current = *head;
	listint_t *temp = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}


	for (i = 0; i < index - 1 && current->next != NULL; i++)
	{
		temp = current;
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}


		temp->next = current->next;
		free(current);
		return (1);
}

