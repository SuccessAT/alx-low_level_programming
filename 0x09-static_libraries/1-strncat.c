#include "main.h"
#include <string.h>
/**
 * _strncat - a c function to concatenate two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes usable from src
 *
 * Return: a pointer to a string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
