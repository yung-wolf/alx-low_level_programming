#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value from table
 * @ht: hash table
 * @key: key used to get value
 * Return: value on success, NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *) key, ht->size);
	hash_node_t *node = ht->array[index];

	if (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}
	return (NULL);
}
