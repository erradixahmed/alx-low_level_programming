#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a function pointer
 * @name: a string containing the name to be printed
 * @f: a pointer to a function that prints a string
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
