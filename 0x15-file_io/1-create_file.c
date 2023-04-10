#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fs;
	int nemoji;
	int rwr;

	if (!filename)
		return (-1);

	fs = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fs == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nemoji = 0; text_content[nemoji]; nemoji++)
		;

	rwr = write(fs, text_content, nemoji);

	if (rwr == -1)
		return (-1);

	close(fs);

	return (1);
}
