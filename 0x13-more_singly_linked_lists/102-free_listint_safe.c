#include "lists.h"

/**
 * free_listint_safe -  frees a listint_t list
 *
 * @h: pointer to head of nodes
 *
 * Return: returns size of list
 */


size_t free_listint_safe(listint_t **h)
{
	listint_t *prev = NULL;
	listint_t *current = *h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		if (current < current->next)
		{
			prev = current;
			current = current->next;
			free(prev);
		}
		else
		{
			free(current);
			break;
		}


	}

	*h = NULL;
	return (count);

}

