#include "main.h"

/**
 * read_textfile - reads the content of a file and prints to stdout
 *
 * @filename: file to be opened
 * @letters: number of char to read
 *
 * Return: number of char printed
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r_read, s_write;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);


	fd = open(filename, O_RDWR, 0700); /* open txt file */

	if (fd == -1)
	{
		return (0);
	}

	r_read = read(fd, buf, letters); /*read content and save to array */
	if (r_read == -1)
		return (0);

	s_write = write(STDOUT_FILENO, buf, r_read);

	if (s_write == -1 || s_write != r_read)
		return (0);

	close(fd);

	free(buf);

	return (s_write);

}
