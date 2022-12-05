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
	int fd, i = 0;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);


	fd = open(filename, O_RDWR, 00777); /* open txt file */

	if (fd == -1)
	{
		return (0);
	}

	read(fd, buf, letters); /*read content and save to array */
	buf[letters + 1] = '\0';


	close(fd);

	while (buf[i])
	{
		_putchar(buf[i++]);
	}

	return (letters);

}
