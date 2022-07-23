#include "main.h"

/**
 * clear_bit - function to set the value of a bit to 0 at a given index
 * @n: pointer parameter
 * @index: bit index
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;

	if (*n & a)
	*n ^= a;
	return (1);
}
