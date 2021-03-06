#include "hash_tables.h"
/**
 *hash_new_node - Function that make new node
 *@key: keyy
 *@value: valueid
 *Return: New node
 */

hash_node_t *hash_new_node(const char *key, const char *value)
{
	hash_node_t *node = NULL;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/**
 *hash_table_set - Function that add elemnts to the hash table
 *@ht: table
 *@key: key
 *@value: valor
 *Return: Success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node, *tmp;
	char *valuenew;

	if (ht == NULL || ht->size == 0 || ht->array == NULL || key == NULL)
		return (0);
	if (strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			valuenew = strdup(value);
			if (valuenew == NULL)
				return (0);
			free(tmp->value);
			tmp->value = valuenew;
			return (1);
		}
		tmp = tmp->next;
	}
	hash_node = hash_new_node(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}
