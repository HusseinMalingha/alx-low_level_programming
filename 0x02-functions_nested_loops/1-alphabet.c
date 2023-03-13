#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return - None
 */
void print_alphabet(void)
{
	char alpha = 'a';
	int i = 0;

	while (i < 26)
	{
		_putchar(alpha + i);
		i++;
	}
	_putchar('\n');
}
