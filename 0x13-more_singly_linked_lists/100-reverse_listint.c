#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to first node in the list
 *
 * Return: pointer to first node in new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *bullet, *bomb;

	if (head == NULL || *head == NULL)
		return (NULL);

	bomb = NULL;

	while ((*head)->next != NULL)
	{
		bullet = (*head)->next;
		(*head)->next = bomb;
		bomb = *head;
		*head = bullet;
	}

	(*head)->next = bomb;

	return (*head);
}
