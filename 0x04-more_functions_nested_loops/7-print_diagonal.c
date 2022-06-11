#include "main.h"

/**
 * print_diagonal - this is a c function
 * @n: argument we pass
 */

void print_diagonal(int n)
{
	int j;

	for (j = 0; j < n-1; j++)
	{
		if (n < 0)
		{
			break;
		}

		_putchar(' ');
	}
	_putchar('\n');
}
