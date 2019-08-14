#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>

/**
 * create_file - Creates a file.
 * @filename: File.
 * @text_content: NULL terminated string.
 * Return: -1 or 1.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t len = 0;
	int op = 0, wr = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	/** Open file with all the flags including the permissions */
	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (op == -1)
	{
		return (-1);
	}

	/** If NULL, create the file */
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
		wr = write(op, text_content, len);
	}

	/** And write it  */
	if (wr == -1 || wr != len)
	{
		return (-1);
	}

	/** On sucess */
	return (1);
}
