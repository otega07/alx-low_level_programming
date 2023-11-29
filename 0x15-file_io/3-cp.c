#include "main.h"
/**
 * error_file - check if file is open and handle errors
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
 * main - copy content of file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t nchars, wwr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_file(file_from, file_to, argv);

	while ((nchars = read(file_from, buff, 1024)) > 0)
	{
		if (nchars == -1)
			error_file(-1, 0, argv);

		wwr = write(file_to, buff, nchars);
		if (wwr == -1)
		error_file(0, -1, argv);
	}
	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close tv %d\n", file_from);
		exit(100);
	}
	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close tv %d\n", file_to);
		exit(100);
	}
	return (0);
}
