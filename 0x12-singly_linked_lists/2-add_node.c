#include "lists.h"

/**
 * add_node -  new node at the beginning of a list_t list
 *
 * @head: pointer head of elements
 * @str: string of elements
 *
 * Return: return list of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

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

	newNode->next = *head;
	*head = newNode;
	return (newNode);

}
