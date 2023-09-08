#include "hash_tables.h"

/**
 * hash_table_set - func to add/update element in a hash table.
 * @ht: hash table pointer
 * @key: key to be added- cannot be empty string.
 * @value: value of the key
 *
 * Return: on success 1.
 *         failure - 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
	{
	hash_node_t *new;
	char *v_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	v_copy = strdup(value);
	if (v_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = v_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(v_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = v_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
