#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file used to append
 * @text_content: to be appended
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int tv, lettrs, wwr;

	if (!filename)
		return (-1);
	tv = open(filename, O_WRONLY | O_APPEND);
	if (tv == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(tv);
		return (1);
	}
	for (lettrs = 0; text_content[lettrs] != '\0'; lettrs++)
		;
	wwr = write(tv, text_content, lettrs);
	if (wwr == -1)
	{
		close(tv);
		return (-1);
	}
	close(tv);
	return (1);
}
