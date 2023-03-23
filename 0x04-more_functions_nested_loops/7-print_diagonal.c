#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int y, x;

		for (y = 0; y < n; y++)
		{
			for (x = 0; x < n; x++)
		{
			if (x == y)
			_putchar('\\');
			else if (x < y)
			_putchar(' ');
		}
		_putchar('\n');
	}
	}
}
