#include "main.h"

/**
 * read_textfile - reads a text file and print it to the POSIX standard output.
 * @filename: text file to read
 * @letters: numbers of letters printed.
 *
 * Return: nwr-  actual numbers of letters printed if success,
 * else  returns 0 for failure or null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);
	return (nwr);
}

