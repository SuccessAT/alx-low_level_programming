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
	if (argc == 3)
	{
		int i, j, result;

		i = atoi(argv[1]);
		j = atoi(argv[2]);

		result = i * j;

		printf("%d\n", result);
		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
}
