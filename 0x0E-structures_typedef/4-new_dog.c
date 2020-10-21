#include "dog.h"
#include <stdio.h>

/**
 * new_dog - function to assign values to dog structure
 *
 * @name: Name of the dog
 * @age: age of the dog
 * @owner: Name of the owner
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
d = malloc(sizeof(dog_t));
if (d == 0)
{
return (0);
}
d -> name = name;
d -> age = age;
d -> owner=owner;
return (d);
}