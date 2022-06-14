#include "main.h"

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
		length++;
	}

	return (length);
}
