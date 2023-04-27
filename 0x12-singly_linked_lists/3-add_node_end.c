#include "lists.h"

/**
 * add_node_end - a new node at the end of a list_t list
 *
 * @head: head of elements
 * @str: string of elements
 *
 * Return: return list of elements
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *current;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	*head = newNode;
	else
	{
	current = *head;
	while (current->next != NULL)
	current = current->next;
	current->next = newNode;
	}


	return (newNode);

}
