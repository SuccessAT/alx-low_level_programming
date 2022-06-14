#include "main.h"
#include <string.h>

/**
 * _strlen - function gies here
 * @s: string pointer
 * Return: returns length of the string
 */

int _strlen(char *s)
{
	int length;

	for (; *s != '\0'; s++)
	{
		length += 1;
	}

	return (length);
}
