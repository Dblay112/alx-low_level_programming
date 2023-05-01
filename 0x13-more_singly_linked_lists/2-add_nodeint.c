#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 *               of a listint_t list.
 * @head:  pointer to  address of the
 *        head of listint_t list.
 * @n: integer for new node to contain.
 *
 * Return: If function fails - NULL.
 *         Otherwise - address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *bullet;

	if (head != NULL)
	{
		bullet = malloc(sizeof(listint_t));
		if (bullet == NULL)
			return (NULL);

		bullet->n = n;
		bullet->next = *head;
		*head = bullet;

		return (bullet);
	}

	return (NULL);
}
