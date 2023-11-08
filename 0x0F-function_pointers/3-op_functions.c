#include "3-calc.h"

/**
 * op_add - a function that returns sum of two integers to console
 * @a: num1
 * @b: num2
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that calculates the difference of two integers
 * @a: num1
 * @b: num2
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function to evaluate product of two numbers
 * @a: num1
 * @b: num2
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operation
 * @a: num1
 * @b: num2
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets modulo of a and b
 * @a: num1
 * @b: num2
 * Return: reminder of a modulo b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
