#include "main.h"

/**
 * _pow_recursion - a c function
 * @x: a parameter representing the number to be exponentiated
 * @y: a second parameter representing the exponent
 *
 * Return: an integer
 */

int _pow_recursion(int x, int y)
{
	unsigned int i = 0;

	if (y < 0)
	{
		i = -1;
		return (i);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y-1));
}
