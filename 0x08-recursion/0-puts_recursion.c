#include "main.h"

/**
 * _puts_recursion - a c function
 * @s: a parameter
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(s);
	}
}
