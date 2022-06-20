#include "main.h"

/**
 * _memset - a clone of the memset function
 * @s: string to be replaced
 * @b: byte to be put in the string
 * @n: number of times we replace the byte in the string
 *
 * Return: a string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
