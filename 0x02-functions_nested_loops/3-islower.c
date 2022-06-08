#include "main.h"

/**
 * print_alphabet_x10 - the main function goes here
 *
 * Return: The function returns nothing
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
