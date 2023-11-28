#include "main.h"
/**
 * read_textfile - reads a text file and prints to POSIX std output
 * @filename: pointer
 * @letters: number of letters
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int tv;
	ssize_t rrd, wwr;
	char *buff;

	if (!filename)
		return (0);
	tv = open(filename, O_RDONLY);
	if (tv == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(tv);
		return (0);
	}
	rrd = read(tv, buff, letters);
	if (rrd == -1)
	{
		close(tv);
		free(buff);
		return (0);
	}
	wwr = write(STDOUT_FILENO, buff, rrd);
	close(tv);
	free(buff);

	return (wwr);
}
