#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return - None
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int n = 0, i;

	while (n < 10)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(alpha + i);
		}
		n++;
		_putchar('\n');
	}
}
