#include "lists.h"
/**
 * sum_listint - adds all the data (n) of a linked list.
 *
 * @head : pointer to elements
 *
 * Return: returns sum of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (head == NULL)
	{
		return (0);
	}

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);


}
