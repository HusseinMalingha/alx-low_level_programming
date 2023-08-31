#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @i: integer to compute
 *
 * Return:n if value of i is negative
 * otherwise return value of i
 */
int _abs(int i)
{
	int n;

	if (i < 0)
	{
		n = i * -1;
		return (n);
	}
	else
		return (i);
}
