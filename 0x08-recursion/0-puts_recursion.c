#include "main.h"

/**
 * _puts_recursion - a recursive function that prints caracters to the console
 * @s: a string of characters
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
