#include "main.h"
#define SIZE 1024

/**
 * open_file - copies content from a file a to a file b
 * @src_file: the source file - argv[1]
 * @dst_file: content is copied to this file
 */
void open_file(const char *src_file, const char *dst_file)
{
	char *buf;
	int fd_one, fd_two, fd_one_r, close_input1, close_input2, dst_write;

	buf = malloc(sizeof(char) * SIZE);
	fd_one = open(src_file, O_RDONLY);
	if (fd_one == -1)
		exit(97);
	fd_one_r = read(fd_one, buf, SIZE);
	if (fd_one_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", src_file), exit(98);
	}
	fd_two = open(dst_file, O_CREAT | O_RDWR | O_TRUNC, 00664);
	if (fd_two == -1)
		dprintf(STDERR_FILENO, "Error: can't write to %s", dst_file);

	while (fd_one_r)
	{
		dst_write = write(fd_two, buf, SIZE);
		if (dst_write == -1)
			dprintf(STDERR_FILENO, "Error: can't write to %s", dst_file);
		fd_one_r = read(fd_one, buf, SIZE);
	}

	close_input1 = close(fd_one);
	if (close_input1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_one), exit(100);
	}
	close_input2 = close(fd_two);
	if (close_input2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_two), exit(100);
	}
	free(buf);
}

/**
 * main- main function takes in command line arguments
 * @argc:  count of arguments
 * @argv: array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	open_file(argv[1], argv[2]);

	return (0);
}
