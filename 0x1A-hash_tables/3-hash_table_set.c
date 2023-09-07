#include "hash_tables.h"

/**
 * hash_table_set - function to add elements to hash table
 * @ht: The given hash table
 * @key: key to be mapped
 * @value: Value for the hash table
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode, *current;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		current = current->next;
	}
	if (current == NULL)
	{
		newNode = malloc(sizeof(hash_node_t));
		if (newNode == NULL)
			return (0);

		newNode->key = strdup(key);
		if (newNode->key == NULL)
			return (0);
		newNode->value = strdup(value);
		if (newNode->value == NULL)
			return (0);
		newNode->next = ht->array[index];
		ht->array[index] = newNode;
		return (1);
	}
	return (0);
}
