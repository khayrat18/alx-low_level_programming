#include "lists.h"
/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: head pointer of elements
 * @n: number of nodes
 * Return: returns new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
