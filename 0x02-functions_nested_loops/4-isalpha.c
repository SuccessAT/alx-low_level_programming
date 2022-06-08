#include "main.h"

/**
 * _isalpha - the main function goes here
 *
 * @c: The parameter to be checked
 *
 * Return: The function returns an integer 1 oe 0
 */

int _isalpha(int c)
{
	int retval;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		retval = 1;
	else
		retval = 0;

	return (retval);
}
