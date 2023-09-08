#include "hash_tables.h"

/**
 * key_index - func to get the index of a key/value pair should thats
 *             stored in array of a hash table.
 * @key: key to get the index of
 * @size: size of the array of the hash table
 *
 * Return: key index.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
