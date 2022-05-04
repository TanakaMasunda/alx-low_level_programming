#include "main.h"

/**
 * append_text_to_file - append text to the end of the file
 * @filename: file to append to
 * @text_content: text to append to the file
 * Return: 1 on success and -1 on failure or if filename is NULL
 *  1 if file exists,
 *   -1 if(file doesn't exist or u don't have permission to write the file)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);

	}

	close(fd);

	return (1);
}
