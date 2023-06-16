#include"lists.h"

/**
 *dlistint_len - function that returns number of nodes
 *in a doubly linked list
 *@h: pointer to head node
 *Return: returns number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
