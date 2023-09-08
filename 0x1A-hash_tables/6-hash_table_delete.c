#include "hash_tables.h"

/**
 * hash_table_delete - function to delete a hash table
 * @ht: hash table pointer
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *ptm;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				ptm = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = ptm;
			}
		}
	}
	free(head->array);
	free(head);
}
