#include "lists.h"

/**
 * list_len -  returns the number of elements in a list_t
 *
 * @h: head pointer of elements
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);

}
