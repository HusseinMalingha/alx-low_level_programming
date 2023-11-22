#include "main.h"

int find_sqrt(int n, int guess);

/**
 * _sqrt_recursion - a fuction that returns natural square root of n
 * @n: square
 *
 * Return: natural square root of n, -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (find_sqrt(n, 1));
}
/**
 * find_sqrt - helper function to recursively get square root
 * @n: number whose square root to evaluate
 * @guess: current guess of square root
 *
 * Return: square root
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (find_sqrt(n, guess + 1));
}
