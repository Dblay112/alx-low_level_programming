#include "main.h"

/**
  * read_textfile - Read text file print to STDOUT
  * @filename: The source file
  * @letters: Number of letters to reads and prints
  *
  * Return: ...
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bullet;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	bullet = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, bullet);

	free(buff);
	close(fd);
	return (bullet);
}
