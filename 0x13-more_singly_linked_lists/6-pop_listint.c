#include "lists.h"

/**
 * pop_listint - Deletes head node of a listint_t list.
 * @head: pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: If linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *bull;
	int llet;

	if (*head == NULL)
		return (0);

	bull = *head;
	llet = (*head)->n;
	*head = (*head)->next;

	free(bull);

	return (llet);
}
