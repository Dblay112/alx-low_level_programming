#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at certain index
 * @head: pointer to firstelement in the list
 * @index: index of node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *bullet, *bomb = *head;
	unsigned int node;

	if (bomb == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(bomb);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (bomb->next == NULL)
			return (-1);

		bomb = bomb->next;
	}

	bullet = bomb->next;
	bomb->next = bullet->next;
	free(bullet);
	return (1);
}
