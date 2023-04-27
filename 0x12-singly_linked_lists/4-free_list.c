#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: head pointer of elements
 *
 * Return: returns nothing
 */


void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}

