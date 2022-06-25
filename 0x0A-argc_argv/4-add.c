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
	int x, y;
	int result = 0;
	char *ptr;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		y = strtoul(argv[x], &ptr, 10);

		if (ptr)
		{
			printf("Error\n");
			return (1);
		}

		result = result + y;
	}
	printf("%d\n", result);

	return (0);
}
