#include <stdio.h>

/**
 * main - the main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (*argv[0] != '\0')
		printf("%d\n", argc);

	return (0);
}
