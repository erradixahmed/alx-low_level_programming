#include "main.h"

/**
 * _isalpha - checks for alphabetic char
 * @c: the variable
 * Return: 1 if c is a apper or lowercase alphabet
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
