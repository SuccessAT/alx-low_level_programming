#include "lists.h"

/**
 * dlistint_len - function to get number of nodes
 * @h: pointing to the head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		n += 1;
		h = h->next;
	}
	return (n);
}
