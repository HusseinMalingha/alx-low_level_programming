#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int position = sizeof(unsigned long int) * 8 - 1;

	while (position >= 0)
	{
		unsigned long int mask = 1UL << position;

		_putchar((n & mask) ? '1' : '0');
		position--;
	}

	_putchar('\n');
}
