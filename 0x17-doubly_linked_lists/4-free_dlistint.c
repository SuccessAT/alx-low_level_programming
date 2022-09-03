#include "lists.h"

/**
 * free_dlistint - function to free a doubly linked list
 * @head: points to the head of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head)
	{
		i = head;
		head = head->next;
		free(i);
	}
}
