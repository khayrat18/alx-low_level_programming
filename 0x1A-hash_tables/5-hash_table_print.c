#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}

	/*Print each key/value pair in the hash table*/
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			printf("[%lu] %s:%s\n", i, node->key, node->value);
			node = node->next;
		}
	}
}
