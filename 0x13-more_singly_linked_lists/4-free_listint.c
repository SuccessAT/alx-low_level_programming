#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - function that prints the legth of a linked list
 * @h: struct parameter
 * Return: the number of elements in the linked list
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
