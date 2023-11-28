#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: to be created
 * @text_content: content to be copied to the file
 * Return: 1  on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int tv, lettrs, wwr;

	if (!filename)
		return (-1);

	tv = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (tv == -1)
		return (-1);
	if (!text_content)
		text_content = "";
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
