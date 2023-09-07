#include "hash_tables.h"

/**
 * key_index - gets index of key
 * @key: Key value
 * @size: size of the array for hash table
 * Return: Index value
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = 0;
	unsigned long int index = 0;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}

