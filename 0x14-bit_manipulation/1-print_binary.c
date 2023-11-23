#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int position = sizeof(unsigned long int) * 8 - 1;
	int started = 0;

	while (position >= 0)
	{
		unsigned long int mask = 1UL << position;
		int bit = ((n & mask) ? 1 : 0);

		if (bit || started)
		{
			_putchar(bit ? '1' : '0');
			started = 1;
		}

		position--;
	}

	if (!started)
		_putchar('0');
}
