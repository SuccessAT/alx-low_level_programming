#include "main.h"

/**
 * factorial - a c function
 * n: a parameter
 *
 * Return: the factorial of a number n
 */

int factorial(int n)
{
	if (n = 0)
	{
		return(1);
	}
	return (n * factorial(n - 1));
}
