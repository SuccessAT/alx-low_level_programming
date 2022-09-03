#include "lists.h"

/**
 * add_dnodeint_end - function to add a node at the end of list
 * @head: the head pointer
 * @n: the variable to add
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *i;

	if (!head || !new_node)
		return (new_node ? free(new_node), NULL : NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		i = *head;
		while (i->next)
		{
			i = i->next;
		}
		i->next = new_node;
		new_node->prev = i;
	}
	return (new_node);
}
