#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t
 *
 * @head: pointer to elements
 *
 * Return: return head nodes data
 */



int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (*head == NULL)
		return (0);

	current = *head;
	*head = (*head)->next;
	data = current->n;
	free(current);

	return (data);



}

