#include "main.h"

/**
 * print_alphabet_x10 - the main function goes here
 *
 * Return: The function returns nothing
 */

void print_alphabet_x10(void)
{
	char i;
	int j = 0;

	while (j <= 9)
	{
		i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
