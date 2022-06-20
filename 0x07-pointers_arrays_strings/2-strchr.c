#include "main.h"

/**
 * _strchr - a clone of the strchr function
 * @s: string to be checked
 * @c: character we check for
 *
 * Return: a pointer to c or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *result;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			result = &s[i];
		else
			result = '\0';

	return (result);
}
