#include "main.h"
#include <string.h>

/**
 * _strlen - function gies here
 * @s: string pointer
 * Return: returns length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
