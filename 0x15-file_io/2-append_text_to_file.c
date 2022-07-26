#include "main.h"

/**
 * append_text_to_file - appends text to the end of file
 * @filename: name of file
 * @text_content: text to be added
 * Return: 1 if the file exists or -1 if the file does not exist or it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fildes, letter, i;

	if (!filename)
		return (-1);
	fildes = open(filename, O_WRONLY | O_APPEND);
	if (fildes == -1)
		return (-1);
	if (text_content)
	{
		for (letter = 0; text_content[letter]; letter++)
			;
		i = write(fd, text_content, letter);
		if (i == -1)
			return (-1);
	}
	close(fildes);
	return (1);
}
