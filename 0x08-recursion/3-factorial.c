#include "main.h"

/**
 * factorial - function to calculate fuctorial of number
 * @n: number
 *
 * Return: -1 if n is less than 0, 0 if n is 1 and n * factorial(n - 1)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
