#include "main.h"
#include <string.h>

/**
 * _strspn - a clone of the strspn function
 * @s: string to be checked
 * @accept: character we check for
 *
 * Return: a pointer to c or NULL
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int result;

	result = strspn(s, accept);

	return (result);
}
