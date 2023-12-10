#include "main.h"

/* Function to add two numbers */
int add(int a, int b)
{
	return (a + b);
}

/* Function to subtract two numbers */
int sub(int a, int b)
{
	return (a - b);
}

/* Function to multiply two numbers */
int mul(int a, int b)
{
	return (a * b);
}

/* Function to divide two numbers (integer division) */
int divi(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		return (0);
	}
}

/* Function to calculate the remainder of division */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		return (0);
	}
}
