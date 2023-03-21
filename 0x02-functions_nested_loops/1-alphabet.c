#include "main.h"
/**
 * print_alphabet - print the alphabet in lower case
 * Return: 0
 */

void print _alphabet(void)
{
	int z;

	z = 122;
	while (z >= 97)
	{
		_putchar(z);
		z = z - 1;
	}
	putchar('\n');
}
