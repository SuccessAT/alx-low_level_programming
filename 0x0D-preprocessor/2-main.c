#include <stdio.h>

/**
 * main - the main function
 * @argc: number of arguments
 * @argv: argument vector (list of arguments)
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
