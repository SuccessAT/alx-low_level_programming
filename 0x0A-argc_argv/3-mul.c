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
	int i, j, result, ret;

	sscanf(argv[1], "%d", &i);
	sscanf(argv[2], "%d", &j);

	result = i * j;

	if (argc != 3)
	{
		printf("Error\n");
		ret = 1;
	}
	else
	{
		printf("%d\n", result);
		ret = 0;
	}

	return (ret);
}
