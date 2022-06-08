#include "main.h"

/**
 * main - the main code goes here
 *
 * Return: The function returns zero(0)
 */

/*
int main(void)
{
	print_alphabet();

	return (0);
}

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

	return;
}
