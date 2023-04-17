#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string.
 * @s: String to evaluate.
 *
 * Return: The length of the string.
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: String to copy.
 *
 * Return: On success, returns a pointer to the duplicated string.
 * On failure, returns NULL.
 */
char *_strdup(const char *str)
{
	char *dup;
	size_t len = 0;

	if (str == NULL)
		return (NULL);

	len = _strlen(str) + 1;
	dup = malloc(len * sizeof(char));
	if (dup == NULL)
		return (NULL);

	while (*str)
		*dup++ = *str++;

	*dup = '\0';

	return (dup - len + 1);
}

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: On success, returns a pointer to the new dog. Otherwise, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = _strdup(name);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	owner_copy = _strdup(owner);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
