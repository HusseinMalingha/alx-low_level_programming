#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get from n to m
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	/* Count the number of set bits in xor_result */
	while (xor_result)
	{
		/* Increment count for each set bit */
		count += xor_result & 1;
		xor_result >>= 1; /* Right shift to check the next bit */
	}

	return (count);
}
