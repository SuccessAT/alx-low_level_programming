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
		if (a == 'e'|| a == 'q')
		{
			continue;
		}
		putchar(a);
		if (a == 'z')
		{
			putchar('\n');
		}
	}

	return (0);
}
