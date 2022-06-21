#include "main.h"
#include <string.h>

/**
 * setstring - a r function
 * @s: string to be checked
 * @to: character we check for
 *
 */
void set_string(char **s, char *to)
{
	*s = &(to[0]);
}
