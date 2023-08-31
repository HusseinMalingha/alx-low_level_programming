#include <stdio.h>

/**
 * main - print single digit numbers in base 10
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int single_dig;

	for (single_dig = 0; single_dig < 10; single_dig++)
	{
		printf("%d", single_dig);
	}
	putchar('\n');
	return (0);
}
