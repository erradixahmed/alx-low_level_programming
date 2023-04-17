#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the owner
 *
 * This struct contains basic information about a dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Initializes a dog structure */
void init_dog(dog_t *d, char *name, float age, char *owner);

/* Prints information about a dog structure */
void print_dog(dog_t *d);

/* Creates a new dog structure */
dog_t *new_dog(char *name, float age, char *owner);

/* Frees a dog structure */
void free_dog(dog_t *d);

/* Copies a string from source to destination */
char *_strcpy(char *dest, char *src);

/* Gets the length of a string */
int _strlen(char *s);

#endif
