#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t
 * @h: A pointer to the head of the list_t
 * *
 * Return: The number of nodes in the list_t
 */
size_t print_listint(const listint_t *h)
{
	size_t bullet = 0;

	while (h)
	{
		bullet++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (bullet);
}
