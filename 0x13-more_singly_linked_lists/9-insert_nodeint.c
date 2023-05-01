#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node in a linked list,
 * @head: pointer to first node in the list
 * @idx: index where new node is added
 * @n: data to insert the new node
 *
 * Return: pointer to new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *bullet, *bomb = *head;
	unsigned int node;

	bullet = malloc(sizeof(listint_t));
	if (bullet == NULL)
		return (NULL);

	bullet->n = n;

	if (idx == 0)
	{
		bullet->next = bomb;
		*head = bullet;
		return (bullet);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (bomb == NULL || bomb->next == NULL)
			return (NULL);

		bomb = bomb->next;
	}

	bullet->next = bomb->next;
	bomb->next = bullet;

	return (bullet);
}
