#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - function that prints the contents of a linked list
 * @h: struct parameter
 * Return: the number of elements in the linked list
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		printf("%u\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
