#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: elements of array
 * Return: 0;
 */
void reverse_array(int *a, int n)
{
	int x;
	int w;

	for (x = 0; x < n--; x++)
	{
		w = a[x];
		a[x] = a[n];
		a[n] = w;
	}
}
