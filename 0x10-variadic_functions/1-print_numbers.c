#include "variadic_functions.h"

/**
 * print_numbers - Prints a list of numbers separated by a given separator.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: The variable number of integers to print.
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - i)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
