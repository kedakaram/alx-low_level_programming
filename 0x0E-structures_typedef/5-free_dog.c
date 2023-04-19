#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated for a dog_t structure
 * @d: pointer to the dog_t structure to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free the memory allocated for name and owner strings */
		free(d->name);
		free(d->owner);
		/* Free the memory allocated for the dog_t structure */
		free(d);
	}
}
