#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - this is a c function
 * 
 */

void fizz_buzz(int size)
{
	int i;
	for (i=1; i<=100; i++)
	{
		 if (i%15 == 0)
			 printf ("FizzBuzz\t");
		 else if ((i%3) == 0)
			 printf("Fizz\t");
		 else if ((i%5) == 0)
			 printf("Buzz\t");
		 else
			 printf("%d\t", i);
	}
}
