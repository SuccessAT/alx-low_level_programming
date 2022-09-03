#include "lists.h"

/**
 * sum_dlistint - sum of all the ints in list
 * @head: head pointer of the list
 * Return: sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (!head)
		return (0);
	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
