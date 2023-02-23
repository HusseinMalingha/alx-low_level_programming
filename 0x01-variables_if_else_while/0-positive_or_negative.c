#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - checks number if positive or negative
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
		puts("is positive\n");
	else if (n == 0)
		puts("is zero\n");
	else if (n < 0)
		puts("is negative\n");
	return (0);
}
