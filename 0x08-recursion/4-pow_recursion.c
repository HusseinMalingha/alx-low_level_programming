#include "main.h"

/**
 * _pow_recursion - function that returns value of x raised to power of y
 * @x: base number
 * @y: power
 *
 * Return: if y is lower than 0 return -1, else return x to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
