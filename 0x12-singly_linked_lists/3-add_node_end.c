#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *bri;
	list_t *sel = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	bri->str = strdup(str);
	bri->len = len;
	bri->next = NULL;

	if (*head == NULL)
	{
		*head = bri;
		return (bri);
	}

	while (sel->next)
		sel = sel->next;

	sel->next = bri;

	return (bri);
}
