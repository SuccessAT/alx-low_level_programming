#include "main.h"

/**
 * _strcat - a c function to concatenate two strings
 * @dest: first string
 * @src: second string
 *
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i;

	while (dest[length])
		length++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length += 1;
	}
	dest[length] = '\0';

	return (dest);
}
