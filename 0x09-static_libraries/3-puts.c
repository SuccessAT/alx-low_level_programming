#include "main.h"

/**
 * _puts - function goes in here
 * @str: parameter passed into function
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
