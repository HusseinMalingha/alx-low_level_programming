#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints out string to the console with trailing new line
 * @str: string to be printed
 *
 * Return: None
 */
void print_rev(char *str)
{
	int len = strlen(str);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
