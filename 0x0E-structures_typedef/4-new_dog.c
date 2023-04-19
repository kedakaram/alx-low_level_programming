#include <stdlib.h>
#include <string.h>

/**
 * struct dog - structure for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: structure that defines a dog with a name, age, and owner.
 */

typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/**
 * new_dog - creates a new dog with a given name, age, and owner.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: returns a pointer to the new dog, or NULL if the function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
	return (NULL);
	}

	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
	free(new_dog);
	return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
	free(new_dog->name);
	free(new_dog);
	return (NULL);
	}

	return (new_dog);
}
