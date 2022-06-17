#include "main.h"
#include <string.h>
/**
 * _strncpy - a c function to copy strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes usable from src
 *
 * Return: a pointer to a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
