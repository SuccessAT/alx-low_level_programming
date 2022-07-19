#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - function that prints the legth of a linked list
 * @h: struct parameter
 * Return: the number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
