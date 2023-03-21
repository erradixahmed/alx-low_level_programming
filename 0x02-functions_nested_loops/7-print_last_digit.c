#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int d0;

	if (n < 0)
	{
		n = -n;
	}
	d0 = (n % 10) + '0';
	_putchar(d0);
	return (n % 10);
}
