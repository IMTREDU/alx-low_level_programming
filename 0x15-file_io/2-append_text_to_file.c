#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: Name of the file
 * @text_content: NULL-terminated string
 *
 * Return: 1 on success, -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, result, write_result;
	ssize_t text_len = 0;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[text_len])
		{
			text_len++;
		}
		write_result = write(fd, text_content, text_len);
		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
	}
	result = close(fd);
	if (result == -1)
	{
		return (-1);
	}
	return (1);
}
