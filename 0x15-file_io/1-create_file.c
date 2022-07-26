#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to be created
 * @text_content: content written in the file.
 *
 * Return: 1 on success or. -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fildes, n, r;

	if (!filename)
		return (-1);

	fildes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fildes == -1)
		return (-1);

	if (!text_content)
	text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	r = write(fildes, text_content, n);

	if (r == -1)
		return (-1);

	close(fildes);

	return (1);
}
