#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - it returns  sum of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -it returns difference of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - it returns the product of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - it returns the division of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - it returns remainder of the division of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
