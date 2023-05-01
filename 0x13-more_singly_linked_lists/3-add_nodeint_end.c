#include "lists.h"

/**
 * add_nodeint_end - Adds new node at the
 *                   end of listint_t list.
 * @head: pointer to the address of the
 *        head of the listint_t list.
 * @n: integer for the new node to contain.
 *
 * Return: If function fails - NULL.
 *         Otherwise - address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *bullet, *selorm;

	bullet = malloc(sizeof(listint_t));
	if (bullet == NULL)
		return (NULL);

	bullet->n = n;
	bullet->next = NULL;

	if (*head == NULL)
		*head = bullet;

	else
	{
		selorm = *head;
		while (selorm->next != NULL)
			selorm = selorm->next;
		selorm->next = bullet;
	}

	return
}	
