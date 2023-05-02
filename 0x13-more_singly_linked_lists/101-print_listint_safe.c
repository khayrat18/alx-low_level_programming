#include "lists.h"
/**
 * print_listint_safe -  prints a listint_t linked list
 *
 * @head: pointer to elements
 *
 * Return: returns number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *vst[1024];


	while (current != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (vst[i] == current)
			{
			printf("-> [%p] %d\n", (void *)current, current->n);
			printf("-> ... %lu more nodes\n", count - i);
			exit(98);
			}
		}

	vst[count++] = current;
	printf("[%p] %d\n", (void *)current, current->n);

	current = current->next;
	}
	return (count);
}
