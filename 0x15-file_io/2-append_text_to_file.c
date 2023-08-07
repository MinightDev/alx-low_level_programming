#include "main.h"
/**
 * append_text_to_file - function that appends text at
 * the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: If the function fails or filename is NULL -1.
 * If the file does not exist the user lacks write permissions - -1.
 * Else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
	}
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);
	wr = write(op, text_content, i);
	if (wr == -1)
	{
		close(op);
		return (-1);
	}
	close(op);
	return (1);
}
