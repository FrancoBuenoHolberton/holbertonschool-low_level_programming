#include "hash_tables.h"

/**
 *hash_table_create - Main function that make a table Hash
 *@size: size of table
 *Return: HashTable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht = NULL;
	unsigned long int i;

	if (!size)
		return (NULL);
	hasht = malloc(sizeof(hash_table_t));
	if (!hasht)
		return (NULL);
	hasht->size = size;
	hasht->array = malloc(size * sizeof(hash_node_t *));
	if (hasht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hasht->array[i] = NULL;
	return (hasht);
}
