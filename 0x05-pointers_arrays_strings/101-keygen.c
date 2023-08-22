#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0
 */

int main(void)
{
	int sum = 0;
	int value = 0;

	srand(time(NULL));

	while (sum < (2772 - 122))
	{
		value = (rand() % 122) + 1;
		printf("%c", value);
		sum += value;
	}
	printf("%c", 2772 - sum);
	return (0);
}
