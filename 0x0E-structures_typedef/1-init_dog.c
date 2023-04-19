#ifndef DOG_H
#define DOG_H

/**
 * dog structure representing a pet.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: owner's name.
 *
 * Description: Defines a structure to represent a do
 */

struct dog
{
        char *name;
        float age;
        char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
