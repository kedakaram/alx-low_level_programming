#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a pet dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: owner's name.
 *
 * Description: Defines a structure to represent a dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
