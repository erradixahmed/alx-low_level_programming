#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs
 * @d: struct dog
 */

void free_dog(dog_t *d)
{
	switch (d != NULL)
	{
		case 1:
			free(d->owner);
			free(d->name);
			free(d);
			break;
		default:
			break;
	}
}
