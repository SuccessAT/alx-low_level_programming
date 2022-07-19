#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a node to the start of a linked list
 * @head: node address
 * @str: string data of new node
 * Return: the address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
