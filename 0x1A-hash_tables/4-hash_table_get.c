#include "hash_tables.h"


/**
 * hash_table_get - Retrieves a value associated with a key in a hash table.
 * @ht: The hash table to look into.
 * @key: The key to search for.
 *
 * Return:The value associated with the element,or NULL if failed.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned long int idx;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
