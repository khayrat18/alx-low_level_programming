#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of
 * a dlistint_t linked list.
 * @head: pointer to a pointer to the head node of the list.
 * @index: index of the node to be deleted.
 *
 * Return: 1 on success, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = prev;
	free(temp);
	return (1);
}
