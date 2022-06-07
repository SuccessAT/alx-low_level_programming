#include <stdlib.h>
#include <stdio.h>

/**
 * main - the main code prints a-z
 *
 * Return: The function returns zero(0)
 */

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
		if (a == 'z')
		{
			for (a = 'A'; a <= 'Z'; a++)
			{
				putchar(a);
				if (a == 'Z')
				{
					putchar('\n');
				}
			}
		}
	}

	return (0);
}
