#include "dog.h"
/**
 * init_dog - main
 * @d: str
 * @name: the nm
 * @age: is ?
 * @owner: is me
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
        if (d)
        {
                d->name = name;
                d->age = age;
                d->owner = owner;
        }
}
