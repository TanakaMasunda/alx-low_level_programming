#include "main.h"

#include <stdio.h>

/**
 * create_file - create a file and add content pplus permissions
 * @filename: file to be created
 * @text_content: content in the file to be created
 * Return: 1 on success, -1 on failure (file can not be created, written
 * if filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;


	fd = open("filename.txt", O_CREAT | O_WRONLY, 0600);

	write(fd, "text_content\n", 13);

	if (!fd)
		return (-1);
	else
		return (1);

	fd = open(filename, O_RDONLY);

	if (!filename)
		return (0);

	close(fd);

}
