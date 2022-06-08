#include "main.h"

/**
 * print_sign - the main function goes here
 *
 * @n: The parameter to be checked
 *
 * Return: The function returns an integer 1, 0 or -1
 */

int print_sign(int n)
{
	int retval;

	if (n > 0)
		retval = 1;
	else if (n == 0)
		retval = 0;
	else if (n < 0)
		retval = -1;

	return (retval);
}
