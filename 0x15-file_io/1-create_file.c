#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure or filename is NULL.
 * Description: If text_content is NULL create an empty file. If
 * the file already exists, truncate it. (created file must have those
 * permissions: rw-------)
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, text_len;

	/* Return -1 if filename is NULL */
	if (filename == NULL)
		return (-1);

	if (!text_content)
		text_content = "";
	for (text_len = 0; text_content[text_len]; text_len++)
		;

	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	w = write(o, text_content, text_len);

	/* Return -1 if the function fails */
	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
