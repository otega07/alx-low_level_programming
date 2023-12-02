#include "main.h"
/**
 * open_files - opens the source file and handles errors
 * @argv: argument vector
 * Return: file descriptor
 */
int open_files(char *argv[])
{
	int file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	return file_from;
}
/**
 * error_file - check if file is open and handles error
 * @file_from: initial file
 * @file_to: destination file
 * @argv: argument vector
 * Return: void
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * copy_file_contents - copy contents from one file to another
 * @file_from: source file
 * @file_to: destination file
 * @argv: argument vector
 * Return: void
 */
void copy_file_contents(int file_from, int file_to, char *argv[])
{
	ssize_t nchars, wwr;
	char buff[1024];

	while ((nchars = read(file_from, buff, 1024)) > 0)
	{
		if (nchars == -1)
			error_file(-1, 0, argv);
		wwr = write(file_to, buff, nchars);
		if (wwr == -1 || wwr != nchars)
			error_file(0, -1, argv);
	}
}

/**
 * close_file - close the descriptor and handle errors
 * @file: descriptor
 * Return: void
 */

void close_file(int file)
{
	int error_close = close(file);

	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - copy content of file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open_files(argv);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_file(file_from, file_to, argv);
	copy_file_contents(file_from, file_to, argv);
	close_file(file_from);
	close_file(file_to);
	return (0);
}
