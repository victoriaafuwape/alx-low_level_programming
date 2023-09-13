#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry into program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: various statuses
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];

	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(num1, num2);

	printf("%d\n", result);
	return (0);
}
