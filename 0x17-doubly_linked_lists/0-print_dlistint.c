#include "lists.h"

/**
 * print_dlistint - function to print elements of doubly linked list
 * @h: pointing to the head of the list
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
