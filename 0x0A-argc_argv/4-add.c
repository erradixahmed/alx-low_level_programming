#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks if a string contains only digits
 * @str: input string
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int check_num(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

/**
 * main - entry point for the program
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (check_num(argv[i]))
		{
			num = atoi(argv[i]);
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
