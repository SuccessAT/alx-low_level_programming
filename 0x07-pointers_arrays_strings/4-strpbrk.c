#include "main.h"
#include <string.h>

/**
 * _strpbrk - a clone of the strpbrk function
 * @s: string to be checked
 * @accept: character we check for
 *
 * Return: a pointer to s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *result;

	result = strpbrk(s, accept);

	return (result);
}
