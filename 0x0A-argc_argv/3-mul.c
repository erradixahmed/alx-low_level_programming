#include <stdio.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: String to be converted.
 *
 * Return: The integer converted from the string, or 0 if there is an error.
 */

int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; s[i] != '\0'; i++)
	{
	if (s[i] < '0' || s[i] > '9')
		return (0);

	result = result * 10 + s[i] - '0';
	}

	return (sign * result);
}

/**
 * main - Multiplies two numbers.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 (Success), 1 (Error).
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
	fprintf(stderr, "Usage: %s <num1> <num2>\n", argv[0]);
	return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
	fprintf(stderr, "Error: Invalid argument(s)\n");
	return (1);
	}

	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
