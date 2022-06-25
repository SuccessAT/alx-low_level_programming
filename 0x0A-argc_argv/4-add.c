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
	int x, y;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		y = atoi(argv[x]);

		if (y == 0)
		{
			printf("Error\n");
			return (1);
		}

		result = result + y;
	}
	printf("%d\n", result);

	return (0);
}
