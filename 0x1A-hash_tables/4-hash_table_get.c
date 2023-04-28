#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element, or NULL if no key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *node;

	if (ht  == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	else if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		return (ht->array[index]->value);
	}
	node = ht->array[index];
	while (node->next != NULL)
	{
		node = node->next;
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}
	return (NULL);
}
