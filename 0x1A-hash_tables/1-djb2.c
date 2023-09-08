#include "hash_tables.h"

/**
 * key_index - func to get the index of a key/value pair should thats
 *             stored in array of a hash table.
 * @key: key to get the index of
 * @size: size of the array of the hash table
 *
 * Return: key index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
