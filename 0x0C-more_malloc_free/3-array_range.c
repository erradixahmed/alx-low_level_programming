#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: min number of elements
 * @max: max number of elements
 *
 * Return: array pointer address
 *         NULL if it fails
 */
int *array_range(int min, int max)
{
    int *array, i;

    if (min > max)
        return (NULL);

    array = _calloc(max - min + 1, sizeof(int));
    if (array == NULL)
        return (NULL);

    for (i = 0; i < max - min + 1; i++)
    {
        array[i] = min + i;
    }
    return (array);
}
