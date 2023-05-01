#include "lists.h"

/**
 * sum_listint - Calculates sum of all the
 *               data (n) of a listint_t list.
 * @head: pointer to head of the listint_t list.
 *
 * Return: If the list is empty - 0.
 *         Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int bullet = 0;

	while (head)
	{
		bullet += head->n;
		head = head->next;
	}

	return (bullet);
}
