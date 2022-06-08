#include "main.h"

/**
 * _islower - the main function goes here
 *
 * c - the parameter passed to be checked
 *
 * Return: The function returns an integer 1 oe 0
 */

int _islower(int c)
{
	int retval;

	if (c >= 97 && c <= 122)
		retval = 1;
	else
		retval = 0;

	return (retval);
}
