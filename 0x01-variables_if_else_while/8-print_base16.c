#include <stdlib.h>
#include <stdio.h>

/**
 * main - the main code prints hex digits
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
			break;
		}
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
		if (a == 'f')
		{
			putchar('\n');
		}
	}

	return (0);
}
