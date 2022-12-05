#include "main.h"

/**
 * create_file - creates a file
 * Description:
 * 1. Creates a new file if it does not exist
 * 2. Truncates, if the file previously existed
 * 3. if no input is received, create an empty file
 * @filename: the name of to be used in file creation
 * @text_content: content to be written into filename
 * Return: 1 if successful, -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int fd, r_w;
	char *buf;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
	}
	else
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	buf =  malloc(sizeof(char) * _strlen(text_content));

	r_w = write(fd, text_content, _strlen(text_content) + 1);
	if (r_w == -1)
		return (-1);

	close(fd);
	free(buf);

	return (1);

}

/**
 * _strlen - gets the length of a string
 * @c: string
 * Return: string length
 *
 */
int _strlen(char *c)
{
	int len = 0;

	while (c && c[len])
		len++;

	return (len);
}
