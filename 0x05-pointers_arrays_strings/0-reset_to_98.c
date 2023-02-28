#include <stdio.h>

/* function declaration */
void reset_to_98(int *n);

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

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
 * Return: *n
 */
void reset_to_98(int *n)
{
	*n = 98;
}
