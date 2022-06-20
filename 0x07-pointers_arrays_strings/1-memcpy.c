#include "main.h"
#include <string.h>

/**
 * _memcpy - a clone of the default memcpy function
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to be copiedg
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	memcpy(dest, src, n);
	return (dest);
}
