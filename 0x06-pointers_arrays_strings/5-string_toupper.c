#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int up;

	up = 0;
	while (n[up] != '\0')
	{
		if (n[up] >= 'a' && n[up] <= 'z')
			n[up] = n[up] - 32;
		up++;
	}
	return (n);
}
