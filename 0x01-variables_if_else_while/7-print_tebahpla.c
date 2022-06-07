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

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
		if (a == 'a')
		{
			putchar('\n');
		}
	}

	return (0);
}
