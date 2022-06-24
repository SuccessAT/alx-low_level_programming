#include "main.h"
#include <string.h>

/**
 * is_palindrome - a c function
 * @s: a string parameter to be checked
 *
 * Return: an integer 1 0r 0
 */

int is_palindrome(char *s)
{
	char *r = strrev(s);
	result = strcmp(r, s);
	if (result == 0)
		return (1);
	else
		return (0);
}
