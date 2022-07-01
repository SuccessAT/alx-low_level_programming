#include "main.h"
#include <string.h>

/**
 * malloc_checked - main function
 * @b: parameter
 *
 * Return: a pointer to the memory allocated 
 * or NULL if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem  = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
