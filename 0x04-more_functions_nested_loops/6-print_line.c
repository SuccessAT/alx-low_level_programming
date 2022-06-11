#include "main.h"

/**
 * print_line - this is a c function
 * @n: argument we pass
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (n <= 0)
		{
			break;
		}

		_putchar('_');
	}
	_putchar('\n');
}
