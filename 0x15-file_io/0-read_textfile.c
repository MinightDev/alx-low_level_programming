#include "main.h"
/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: A pointer to a null-terminated string
 * containing the name of the file to be read.
 *
 * @letters: The maximum number of bytes to be read from the file.
 *
 * Return: If the function succeeds, it returns
 * the number of bytes read from the file and printed to
 * the standard output. If an error occurs, it returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t re, wr, op;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		free(buffer);
		return (0);
	}
	re = read(op, buffer, letters);
	if (re == -1)
	{
		free(buffer);
		close(op);
		return (0);
	}
	wr = write(STDOUT_FILENO, buffer, re);
	if (wr == -1 || re != wr)
	{
		free(buffer);
		close(op);
		return (0);
	}

	free(buffer);
	close(op);
	return (wr);
}
