#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the text file.
 * @text_content: A pointer to the content of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int taya, tayad, len;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	taya = open(filename, O_WRONLY | O_APPEND);
	if (text_content == NULL)
	{
		close(taya);
		return (1);
	}
	tayad = write(taya, text_content, len);
	if ((taya == -1) || (tayad == -1))
	{
		return (-1);
	}
	close(taya);
	return (1);
}
