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
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; a <= '9'; a++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
