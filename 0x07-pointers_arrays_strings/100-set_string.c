#include "main.h"
#include <string.h>

/**
 * set_string - a r function
 * @s: string to be checked
 * @to: character we check for
 *
 */
void set_string(char **s, char *to)
{
	*s = &(to[0]);
}
