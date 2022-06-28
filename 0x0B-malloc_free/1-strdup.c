#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - main function
 * @str: string to be duplicated
 *
 * Return: a duplicate of the original string
 */

char *_strdup(char *str)
{
	int i =1, j = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	duplicate = malloc(i * sizeof(char) + 1);
	if (duplicate == NULL)
		return (NULL);
	while (j < i)
	{
		duplicate[j] = str[j];
		j++;
	}
	duplicate[j] = '\0';
	return (s);
}
