#include "main.h"

/*
 * swap_int - main function to swap two numbers
 * @a: parameter 1
 * @b: parameter 2
 */
void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
