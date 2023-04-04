#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int A, b, c;

	A = 0;
	b = 0;

	for (c = 0; c < size; c++)
	{
		A = A + a[c * size + c];
	}
	for (c = size - 1; c >= 0; c--)
	{
		b += a[c * size + (size - c - 1)];
	}
	printf("%d, %d\n", A, B);
}
