#include "3-calc.h"

/**
 * op_add - sums a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds the difference of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - finds the product of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - finds the result of the division of a by b
 * @a: first integer
 * @b: second integer
 *
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the remainder of the division of a by b
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
