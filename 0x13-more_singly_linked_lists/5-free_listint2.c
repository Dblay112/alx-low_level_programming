#include "lists.h"

/**
 * free_listint2 - frees listint_t list.
 * @head: pointer to the address of the
 *        head of the listint_t list.
 *
 * Description: Sets head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *bull;

	if (head == NULL)
		return;

	while (*head)
	{
		bull = (*head)->next;
		free(*head);
		*head = bull;
	}

	head = NULL;
}
