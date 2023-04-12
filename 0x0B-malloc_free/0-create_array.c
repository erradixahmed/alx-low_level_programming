#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size @size and initializes all
 *                elements to @c.
 * @size: size of array
 * @c: char to initialize array elements with
 *
 * Return: pointer to the created array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	if (size == 0)
		return (array);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
