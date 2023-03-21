#include "main.h"

/**
 * _islower - check if c is lowercase
 * @c : is the char
 * Return: 1 if c is lowercase , if else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
