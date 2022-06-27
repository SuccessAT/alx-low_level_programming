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
		int i, j;
		int result = 0;
		int r[6] = {25, 10, 5, 2, 1};

		i = atoi(argv[1]);
		if (i <= 0)
		{
			printf("0\n");
			return (0);
		}

		for (j = 0; j < 5; j++)
		{
			result = result + (i / r[j]);
			if (i % r[j] == 0)
				break;
			i = i % r[j];
			/*
			 * printf("Value of i: %d\n", i);
			 * printf("Value of result: %d\n", result);
			 */
		}

		printf("%d\n", result);
		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
}
