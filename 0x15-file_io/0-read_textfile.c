#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: name of file
 * @letters: letters
 *
 * Return: numbers of letters printed (or 0 on fail)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes;
	ssize_t noread, nowrite;
	char *buffer;

	if (!filename)
	return (0);

	fildes = open(filename, O_RDONLY);

	if (fildes == -1)
	return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	noread = read(fildes, buffer, letters);
	nowrite = write(STDOUT_FILENO, buffer, noread);

	close(fildes);

	free(buffer);

	return (nowrite);
}
