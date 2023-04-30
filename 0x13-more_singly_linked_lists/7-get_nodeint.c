#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 *
 * @head: pointer to nodes
 * @index: index of node
 *
 * Return - the nth node, otherwise null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	 unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index - 1)
		{
			return (current);
		}

		count++;
		current = current->next;

	}

	return (NULL);

}
