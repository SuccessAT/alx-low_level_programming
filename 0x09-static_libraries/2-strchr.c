#include "main.h"
#include <string.h>

/**
 * _strchr - a clone of the strchr function
 * @s: string to be checked
 * @c: character we check for
 *
 * Return: a pointer to c or NULL
 */
char *_strchr(char *s, char c)
{
	char *result;

	result = strchr(s, c);

	return (result);
}
