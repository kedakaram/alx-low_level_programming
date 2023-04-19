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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */

