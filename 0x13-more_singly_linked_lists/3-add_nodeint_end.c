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
	listint_t *selorm;
	listint_t *bright = *head;

	selorm = malloc(sizeof(listint_t));
	if (!selorm)
		return (NULL);

	selorm->n = n;
	selorm->next = NULL;

	if (*head == NULL)
	{
		*head = selorm;
		return (selorm);
	}

	while (bright->next)
		bright = bright->next;

	bright->next = selorm;

	return (selorm);
}
