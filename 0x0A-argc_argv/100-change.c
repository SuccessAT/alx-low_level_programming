#include <stdio.h>
#include <stdlib.h>
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

		sscanf(argv[1], "%d", &i);
		sscanf(argv[2], "%d", &j);

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
