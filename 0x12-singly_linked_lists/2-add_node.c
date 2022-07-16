#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a node to the start of a linked list
 * @head: node address
 * @str: string data of new node
 * Return: the address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = *head;
	*head = new;

	return (new);
}
