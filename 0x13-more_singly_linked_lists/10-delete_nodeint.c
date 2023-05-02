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

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}


	for (i = 0; i < index - 1 && current->next != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

		temp = current->next;
		current->next = temp->next;
		free(temp);
		return (1);
}

