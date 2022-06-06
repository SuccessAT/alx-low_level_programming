#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *This is a C file to determine whether a number
 *is zero, positive or negative
 *
 *main: The main code goes here
 *
 *return: (0)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Beginning of my code */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	/* End of my code */
	return (0);
}
