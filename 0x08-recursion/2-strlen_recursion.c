#include "main.h"

/**
 * _strlen_recursion - a c function
 * @s: a parameter
 * return: an integer 0 or length of string s 
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
