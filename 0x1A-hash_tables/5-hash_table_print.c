#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	int first_node_printed = 0;
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (first_node_printed)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first_node_printed = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
