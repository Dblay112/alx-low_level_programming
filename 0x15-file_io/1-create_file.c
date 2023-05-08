#include "holberton.h"

/**
  * create_file - Creates a file
  * @filename: pointer to the name of the file to create
  * @text_content: pointer to a string to write to file
  *
  * Return: If the function fails - -1.  Otherwise - 1.
  */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, _strlen(text_content));

	close(fd);
	return (1);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int b = 0;

	while (s[b])
		b++;

	return (b);
}
