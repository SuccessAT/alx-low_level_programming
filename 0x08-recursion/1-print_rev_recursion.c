#include "main.h"

/**
 * _print_rev_recursion - a c function
 * @s: a parameter
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		return;
	}
	_putchar('\n');
}
