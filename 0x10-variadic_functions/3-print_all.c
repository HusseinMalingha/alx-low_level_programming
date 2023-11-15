#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the provided format.
 * @format: A list of types of arguments passed to the function.
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *sep = "";
	unsigned int i = 0;
	char c;

	va_start(args, format);

	while (format && format[i])
	{
		c = format[i];
		
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				sep = va_arg(args, char *);
				if (sep == NULL)
					printf("(nil)");
				else
					printf("%s", sep);
				break;
			default:
				break;
		}
		printf(", ");
		i++;
	}

	va_end(args);

	printf("\n");
}

