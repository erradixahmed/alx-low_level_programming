#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, setting all bits to 0
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory, or NULL if nmemb or size is 0 or if
 * malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (unsigned int i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
