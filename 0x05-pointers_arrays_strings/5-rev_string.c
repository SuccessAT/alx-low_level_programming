#include "main.h"

/**
 * rev_string - printing a string in reverse
 * @s: the string
 */

void rev_string(char *s)
{
	int i;
	int len1 = 0;
	int len2 = 0;
	int hold = 0;

	while (s[len1] != '\0')
		len1++;
	len2 = len1 - 1;
	for (i = 0; i < len1 / 2; i++)
	{
		hold = s[i];
		s[i] = s[len2];
		s[len2] = hold;
		len2 -= 1;
	}
}
