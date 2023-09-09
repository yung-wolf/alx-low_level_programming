#include "hash_tables.h"

/**
 * hash_table_print - printd a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i, count = 0;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (count)
					printf(", ");
				printf("'%s': '%s'", node-> key, node->value);
				count = 1;
				node = node->next;
			}
		}
		printf("}\n");
	}
	else if (ht == NULL)
		return;
	else
		printf("{}\n");
}
