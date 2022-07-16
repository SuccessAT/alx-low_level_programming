#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - function that prints the legth of a linked list
 * @h: struct parameter
 * Return: the number of elements in the linked list
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
