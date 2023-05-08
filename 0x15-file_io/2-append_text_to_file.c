#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 * @filename: pointer to filename.
 * @text_content: string to added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bullet;
	int ss;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (bullet = 0; text_content[bullet]; bullet++)
			;

		ss = write(fd, text_content, bullet);

		if (ss == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
