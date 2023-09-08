#include "hash_tables.h"

/**
 * shash_table_create - Used to create a hash table array
 * @size: Size of array to be created
 * Return newly created array pointer
*/

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *newTable;
	unsigned long int i;

	newTable = malloc(sizeof(shash_table_t));
	if (newTable == NULL)
	{
		return (NULL);
	}
	newTable->size = size;
	newTable->array = malloc(sizeof(shash_node_t *) * size);
	if (newTable->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		newTable->array[i] = NULL;
	}
	newTable->shead = NULL;
	newTable->stail = NULL;

	return (newTable);
}

/**
 * shash_table_set - function to add elements to hash table
 * @ht: The given hash table
 * @key: key to be mapped
 * @value: Value for the hash table
 * Return: 1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *Newnode = NULL, *current = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
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
			break;
		}
		current = current->next;
	}
	if (current  == NULL)
	{
		Newnode = malloc(sizeof(shash_node_t));
		if (Newnode == NULL)
		{
			return (0);
		}
		Newnode->key = strdup(key);
		Newnode->value = strdup(value);
		Newnode->next = ht->array[index];
		ht->array[index] = Newnode;
		Newnode->sprev = NULL;
		Newnode->snext = NULL;
	}

	return (1);

}


/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: Is the hash table to be searched
 * @key: Key to search hash table
 * Return: Value if successful and NULL is key not found
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t *current;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Print key, value pairs sorted by key
 * @ht: hash table to be used
 * Return: Void
 */

void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i = 0;
	int printed = 0;
	shash_node_t *current;

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

	printf("}\n");
}

/**
 * shash_table_print_rev - Print key,value pairs in reverse order sorted by key
 * @ht: hash table to be used
 * Return: Void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i = 0;
	int printed = 0;
	shash_node_t *current;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (i = ht->size - 1; i < ht->size; i--)
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

	printf("}\n");
}


/**
 * shash_table_delete - Deletes value from hash table
 * @ht: hash table to be check
 * Return: Void
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *current, *temp;

	if (ht == NULL)
	{
		return;
	}
	current = ht->shead;
	while (current != NULL)
	{
		temp = current;
		current = current->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
	}

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
