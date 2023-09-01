#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for success
 */

int main(int argc  __attribute__((unused)), char *argv[])
{
	int v;

	for (v = 0; v < argc; v++)
	{
		printf("%s\n", argv[v]);
	}

	return (0);
}
