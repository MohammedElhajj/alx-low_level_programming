#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: a pointer points to the file
 * @letters: the number of letters to be read and printed
 *
 * Return: The actual number of letters it could read and print
 * othewise 0 if the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w; /*For open read and write */
	char *buffer;

	/* Return 0 if filename is NULL */
	if (filename == NULL)
		return (0);

	/* Memory allocating and check */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	/* If the function fails free the memory and return 0 */
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);

	return (w);
}
