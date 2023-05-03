#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: pointer to elements
 *
 * Return: returns  a pointer to the first node of the reversed list
 */



listint_t *reverse_listint(listint_t **head)
{

	listint_t *current = *head;
	listint_t *prev = NULL;

	while (current != NULL)
	{
		listint_t *next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (prev);

}
