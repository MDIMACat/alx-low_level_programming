#include "hash_tables.h"

/**
 * hash_table_print - Print key, value pairs
 * @ht: hash table to be used
 * Return: Void
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int printed = 0;
	hash_node_t *current;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (printed > 0)
			{
				printf(", ");
			}
			printf("'%s':'%s'", current->key, current->value);
			printed++;

			current = current->next;
		}

	}
}
