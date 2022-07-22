#include "main.h"

/**
 * binary_to_uint - convert binary number to unsigned integer
 * @b: binary.
 *
 * Return: uint
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int length; 
	int base2;

	if (!b)
		return (0);

	uint = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base2 = 1; length >= 0; length--, base2 *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			uint += base2;
		}
	}
	
	return (uint);
}
