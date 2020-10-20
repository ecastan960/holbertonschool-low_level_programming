#include "dog.h"

/**
 * init_dog - writes the character c to stdout
 *
 * @d: function
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != 0)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
