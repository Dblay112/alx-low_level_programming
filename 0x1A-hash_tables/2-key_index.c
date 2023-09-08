#include "hash_tables.h"

/**
 * key_index - function that to get the index of a key
 *
 * Description: gets the index of a key
 *
 * @key: the key if the func
 * @size: size of the array of the hash table
 *
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_rs;

	hash_rs = hash_djb2(key);
	if (size != 0)
		return (hash_rs % size);
	return (0);
}
