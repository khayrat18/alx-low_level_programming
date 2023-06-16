#include "lists.h"

/**
 * sum_dlistint -  sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to head node
 * Return: return sum, othewise 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		sum += current->n;
		current  = current->next;

	}
	return (sum);
}
