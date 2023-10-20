#include "lists.h"

/**
 * find_listint_loop - Finds loop contained in listint_t linked list.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - address of node where loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *bullet, *bomb;

	if (head == NULL || head->next == NULL)
		return (NULL);

	bullet = head->next;
	bomb = (head->next)->next;

	while (bomb)
	{
		if (bullet == bomb)
		{
			bullet = head;

			while (bullet != bomb)
			{
				bullet = bullet->next;
				bomb = bomb->next;
			}

			return (bullet);
		}

		bullet = bullet->next;
		bomb = (bomb->next)->next;
	}

	return (NULL);
}
