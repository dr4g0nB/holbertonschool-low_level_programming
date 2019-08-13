#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>

/**
 * read_textfile - Reads a text file.
 * @filename: File.
 * @letters: Number of letters.
 * Return: 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, wr, cl, rd;
	char *tmp;

	if (filename == NULL)
	{
		return (0);
	}
	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		return (0);
	}
	tmp = malloc(sizeof(size_t) * letters);
	if (tmp == NULL)
	{
		return (0);
	}
	rd = read(op, tmp, letters);
	if (rd == -1)
	{
		return (0);
	}
	wr = write(STDOUT_FILENO, tmp, rd);
	if (wr == -1)
	{
		return (0);
	}
	cl = close(op);
	if (cl == -1)
	{
		return (0);
	}
	free(tmp);
	return (rd);

}
