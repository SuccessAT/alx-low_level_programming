#include "main.h"

/**
 * print_alphabet_x10 - the main function goes here
 *
 * Return: The function returns nothing
 */

void print_alphabet_x10(void)
{
	char i = '0';

	while (i <= 9)
	{
		print_alphabet();
		i++;
	}
	_putchar('\n');
}
