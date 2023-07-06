#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: is the key for the item
 * @size: the size of the array of hash_table
 * Return: The index for key value
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
