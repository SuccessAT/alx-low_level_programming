#include "main.h"

/**
 * main - the main code goes here
 *
 * Return: The function returns zero(0)
 */

int main(void)
{
	char a[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i = 0;

	while (i <= 7)
	{
		_putchar(a[i]);
		i += 1;
	}
	_putchar('\n');

	return (0);
}
