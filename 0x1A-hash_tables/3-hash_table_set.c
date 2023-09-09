#include "hash_tables.h"

/**
 * create_node - creates new node for hash table
 * @key: key to get index
 * @value: value paired with key
 * Return: newly created node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	/* create node holds key-value-link */
	hash_node_t *node = (hash_node_t *) malloc(sizeof(hash_node_t));

	if (!node)
		return (0);
	node->key = (char *) malloc(strlen(key) + 1);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	node->value = (char *) malloc(strlen(value) + 1);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (0);
	}

	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;

	return (node);
}


/**
 * hash_table_set - adds element to hash table
 * @ht: hash table
 * @key: key used to retrieve index
 * @value: value paired with key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *current_node;

	if (!ht)
		return (0);

	/* get index */
	index = key_index((const unsigned char *)key, ht->size);
	/* create node holds key-value-link */
	node = create_node(key, value);
	current_node = ht->array[index];

	if (!node)
		return (0);

	if (current_node == NULL)
		ht->array[index] = node;
	else
	{	/* if key is already in table*/
		if (strcmp(current_node->key, key) == 0)
			strcpy(current_node->value, value);
		else
		{
			node->next = ht->array[index];
			ht->array[index] = node;
		}
	}
	return (1);
}
