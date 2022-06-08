#include "main.h"

/**
 * print_alphabet - the main function goes here
 *
 * Return: The function returns nothing
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
