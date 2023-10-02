#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout.
 * @filename: Name of the text file.
 * @letters: Number of letters it should read and print.
 *
 * Return: Count of letters read and printed, 0 if failed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *filePtr;
	char *space;
	ssize_t readLet, writeLet;

	if ((filename == NULL) | (letters == 0))
		return (0);

	filePtr = fopen(filename, "r");
	if (filePtr == NULL)
		return (0);

	space = malloc(sizeof(char) * (letters + 1));
	if (space == NULL)
	{
		fclose(filePtr);
		return (0);
	}
	readLet = fread(space, sizeof(char), letters, filePtr);
	if (readLet == -1)
	{
		fclose(filePtr);
		free(space);
		return (0);
	}
	space[readLet] = '\0';
	writeLet = write(STDOUT_FILENO, space, readLet);
	fclose(filePtr);
	free(space);
	if (writeLet == readLet)
		return (readLet);
	else
		return (0);
}
