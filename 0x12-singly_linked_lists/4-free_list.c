#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - function that frees a linked list
 * @head: node address
 */

void free_list(list_t *head)
{
	list_t *new;
	new = malloc(sizeof(list_t));

	while (new != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}

}
