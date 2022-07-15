#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - function that prints the contents of a linked list
 * @h: struct parameter
 * Return: the number of elements in the linked list
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	h = head;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil) \n");
		else
			printf("[%d] %s\n", strlen(h->str), h->str);
		count++;
		h = h->next;
	}
	return (count);
}
