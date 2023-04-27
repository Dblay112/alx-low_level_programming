#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *bri;
	unsigned int len = 0;

	while (str[len])
		len++;

	bri = malloc(sizeof(list_t));
	if (!bri)
		return (NULL);

	bri->str = strdup(str);
	bri->len = len;
	bri->next = (*head);
	(*head) = bri;

	return (*head);
}
