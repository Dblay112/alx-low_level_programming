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
	char *buf;
	ssize_t bd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (bd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(bd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(bd);
	return (w);
}
