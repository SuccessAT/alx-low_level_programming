#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index
 * @h: pointer to head of list
 * @idx: the index
 * @n: the int to put into the new node
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *space;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!h || !new)
		return (new ? free(new), NULL : NULL);
	space = *h;
	new->n = n;

	if (!idx)
	{
		new->prev = NULL;
		new->next = space ? space : NULL;
		if (space)
		{
			space->prev = new;
		}
		return (*h = new);
	}

	for (; space; space = space->next, idx--)
	{
		if (idx - 1 == 0)
		{
			new->prev = space;
			new->next = space->next;
			if (new->next)
				new->next->prev = new;
			space->next = new;
			return (new);
		}
	}
	return (free(new), NULL);
}
