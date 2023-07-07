#include "hash_tables.h"
/**
 * key_index - give you the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: returns the index at which a key/value pair
 * should be stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int hash_value = hash_djb2(key);

	return (hash_value % size);
}
