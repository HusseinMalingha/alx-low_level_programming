#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints out string to the console with trailing new line
 * @str: string to be printed
 *
 * Return: None
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
