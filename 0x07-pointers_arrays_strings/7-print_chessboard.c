#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int v;

	for (x = 0; x < 8; x++)
	{
		for (v = 0; v < 8; v++)
			_putchar(a[x][v]);
		_putchar('\n');
	}
}
