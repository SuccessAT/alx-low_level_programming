#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - the main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success or 1 on error
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, j, result;
		int r1, r2, r3, r4, r5;

		i = atoi(argv[1]);

		if (i < 0)
		{
			printf("0\n");
			return (0);
		}

		r1 = i / 25;
		r2 = (i % r1) / 10;
		r3 = (r1 % r2) / 5;
		r4 = (r3 % r2) / 2;
		r5 = (r4 % r3) / 1;
		result = r1 + r2 + r3 + r4 + r5;

		printf("%d\n", result);
		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
}
