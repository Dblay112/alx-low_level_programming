#include "hash_tables.h"

/**
 * hash_table_get - retrives key value in a hash table
 * @ht: hash table pointer.
 * @key: key value.
 *
 * Return: umatched key - NULL.
 *         Otherwise - the value associated with key in hashtable.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int indexs;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indexs = key_index((const unsigned char *)key, ht->size);
	if (indexs >= ht->size)
		return (NULL);

	node = ht->array[indexs];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
