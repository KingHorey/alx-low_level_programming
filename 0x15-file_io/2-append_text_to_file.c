#include "main.h"

/**
 * append_text_to_file- appends to a file if it exists
 * @filename: file to be appended to
 * @text_content: data to be added
 * Return: 1 if successful or -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, len, r_write;

	if (filename == NULL)
		return (-1);
        if (text_content == NULL)
                return (1);
		
	file = open(filename, O_APPEND | O_RDWR, 665);

	if (file == -1)
		return (-1);
	len = _strlen(text_content) + 1;
	r_write = write(file, text_content, len);
	
	if(r_write == -1)
		return (-1);

	close(file);
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


