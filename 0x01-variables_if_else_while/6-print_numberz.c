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

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a == '9')
		{
			putchar('\n');
		}
	}

	return (0);
}
