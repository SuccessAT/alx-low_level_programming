#include "main.h"

/**
 * print_alphabet_x10 - the main function goes here
 *
 * Return: The function returns nothing
 */

void print_alphabet_x10(void)
{
	char i = 'a';
	int j;

	while (j <= 9)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
