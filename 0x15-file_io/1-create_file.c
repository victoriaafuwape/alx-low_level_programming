#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer to the content of the file.
 *
 * Return: 1 on success, -1 if otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int hello, hey;
	ssize_t hi;

	if (filename == NULL)
	{
		return (-1);
	}
	hello = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (hello == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (hey = 0; text_content[hey];)
		{
			hey++;
		}
		hi = write(hello, text_content, hey);
	}
	if ((hello == -1) || (hi == -1))
	{
		return (-1);
	}
	close(hello);
	return (1);
}
