#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value (included)
 * @max: maximum value (included)
 *
 * Return: pointer to the newly created array
 *         or NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
    int *array;
    int i, len;

    if (min > max)
        return (NULL);

    len = max - min + 1;
    array = _calloc(len, sizeof(int));

    if (array == NULL)
        return (NULL);

    for (i = 0; i < len; i++)
        array[i] = min + i;

    return (array);
}
