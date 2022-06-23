#include "main.h"

/**
 * _strlen_recursion - a c function
 * @s: a parameter
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (i);
	}	
	s++;
	i++;
	_strlen_recursion(s);
}
