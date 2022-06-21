#include "main.h"
#include <string.h>

/**
 * _strstr - a clone of the strpbrk function
 * @haystack: string to be checked
 * @needle: substring we check for
 *
 * Return: a pointer to haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *result;

	result = strstr(haystack, needle);

	return (result);
}
