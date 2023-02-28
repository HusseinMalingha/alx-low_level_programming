#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* declaratio of n an integer whose value will be changed */
	int n;

	/* n is initialized with 402 */
	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}

/**
 * reset_to_98 - updates the value it points to to 98
 *
 * inputs: int *n
 *
 * Return: None
 */
void reset_to_98(int *n)
{
	*n = 98;
}
