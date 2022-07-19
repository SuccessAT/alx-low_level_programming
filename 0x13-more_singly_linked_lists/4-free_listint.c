#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - function that prints the legth of a linked list
 * @head: struct parameter
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
		exit(3);
	while (head != NULL)
	{
		current = head;
		head = current->next;
		free(current);
	}
}
