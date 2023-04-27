#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node_end - Adds a new node at the end of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *bri;
	list_t *sel = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	bri = malloc(sizeof(list_t));
	if (!bri)
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

