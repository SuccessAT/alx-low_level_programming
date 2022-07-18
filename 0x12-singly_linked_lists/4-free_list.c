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
	list_t *temp;

	while (temp != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

}
