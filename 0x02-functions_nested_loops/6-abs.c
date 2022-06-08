#include "main.h"

/**
 * _abs - the main function goes here
 *
 * @c: The parameter to be checked
 *
 * Return: The function returns an integer 1 oe 0
 */

int _abs(int c)
{
	int retval;

	if (c > 0)
		retval = c;
	else
	{
		c = (c * -1);
		retval = c;
	}


	return (retval);
}
