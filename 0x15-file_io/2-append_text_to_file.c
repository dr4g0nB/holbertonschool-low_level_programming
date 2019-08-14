#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: File.
 * @text_content: NULL terminated string.
 * Return: -1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t len = 0;
	int op = 0, wr = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	op = open(filename, O_RDWR | O_APPEND);
	if (text_content == NULL)
	{
		return (1);
	}
	else if (op == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
		wr = write(op, text_content, len);
	}
	
	if (wr == -1 || wr != len)
	{
		return (-1);
	}
	return (1);
}
