#include "main.h"
/**
 * print_alphabet - print the alphabet in lower case
 * Return: 0
 */

void print _alphabet(void)
{
	int a;

	a = 97;
	while (a <= 122)
	{
		_putchar(a);
		a = a + 1;
	}
	putchar('\n');
}
