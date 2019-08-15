#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
* error_read - Error ro read.
* @file: File.
*/

void error_read(char *file)
{
	
	dprintf(STDERR_FILENO, "Error : Can't read from file %s\n", file);
	exit(98);
}

/**
* error_write - Error to write.
* @file: File.
*/

void error_write(char *file)
{
	dprintf(STDERR_FILENO,"Error: Can't write to %s\n", file );
	exit(99);
}

/**
* error_close - Error to close
* @file: File.
*/

void error_close(char *file)
{
	dprintf(STDERR_FILENO, "Error : Can't close fd %s\n", file);
	exit(100);
}

/**
* main - Copies from one file to another one.
* @argc: Counts.
* @argv: Arguments.
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int op = 0, en = 0, rd = 0, wr = 0, clop, clen;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage : cp file_from file_to");
		exit(97);
	/** Open origin file */
	op = open(argv[1], O_RDONLY);
	if (op == -1)
		error_write(argv[1]);
	/** Opens destiny file */
	en = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (en == -1)
	{
		error_write(argv[2]);
	}
	/** Read and write and repeat if equal to buf */
	do {
		rd = read(op, buf, 1024);
		if (rd == -1)
			error_read(argv[1]);
		wr = write(en, buf, rd);
		if (wr == -1)
			error_write(argv[2]);
	}
	while (rd >= 1024)
	;{
		if (wr < rd)
			 error_write(argv[2]);
	}
	/** Close each file */
	clop = close(op);
	if (clop == -1)
		error_close(argv[1]);
	clen = close(en);
	if (clen == -1)
		error_close(argv[2]);
}
