#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * hash_table_create - function that creates ahash table
 * @size : size of an array
 * Return: a pointer of the newly createdhash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *item;

	item = malloc(sizeof(hash_table_t));
	if (item  == NULL)
	{
		return (NULL);
	}

	item->size = size;
	item->array =  malloc(sizeof(hash_node_t *) * size);
	if (item->array == NULL)
	{
		free(item);
		return (NULL);
	}

	return (item);


}
