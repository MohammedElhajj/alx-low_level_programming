#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: a NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure or filename is NULL.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, text_len;

	/* Return -1 if filename is NULL */
	if (filename == NULL)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);

	if (text_content)
	{
		for (text_len = 0; text_content[text_len]; text_len++)
			;
		w = write(o, text_content, text_len);
	}

	/* Return -1 if the function fails */
	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
