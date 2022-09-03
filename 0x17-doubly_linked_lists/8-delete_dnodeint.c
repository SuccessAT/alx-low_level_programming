#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of list
 * @index: where to delete
 * Return: the 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *space, *temp;

	if (head)
	{

		space = *head;
		if (index < 1)
		{
			if (!space)
				return (-1);
			*head = space->next;
			if (*head)
				(*head)->prev = NULL;
			free(space);
			return (1);
		}

		for (; space; space = space->next, index--)
		{
			if (index - 1 == 0)
			{
				temp = space->next;
				if (!temp)
					break;
				space->next = temp->next;
				if (temp->next)
					temp->next->prev = space;
				free(temp);
				return (1);
			}
		}
	}
	return (-1);
}
