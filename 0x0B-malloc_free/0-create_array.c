#include "main.h"
#include <stdlib.h>

/**
 * create_array - main function
 * @size: size of memory to be reserved
 * @c: character to initialize the array
 *
 * Return: a charcter
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= (size - 1); i++)
	{
		array[i] = c;
	}
	return (array);
}
