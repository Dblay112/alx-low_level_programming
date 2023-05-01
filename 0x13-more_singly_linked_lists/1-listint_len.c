#include <stdio.h>
#include "lists.h"

/**
  * listint_len - Counts the elements in a linked list
  * @h:  head of the linked list
  *
  * Return: umber of elements in a linked list
  */
size_t listint_len(const listint_t *h)
{
	int bullet = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			bullet++;
		}
	}

	return (bullet);
}
