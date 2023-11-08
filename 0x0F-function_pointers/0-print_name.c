#include "function_pointers.h"

/**
 * print_name - function prints a name to console
 * @name: the name to be printed
 * @f: a function pointer to a custom print function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
