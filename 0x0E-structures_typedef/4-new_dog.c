#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function to assign values to dog structure
 *
 * @name: Name of the dog
 * @age: age of the dog
 * @owner: Name of the owner
 *
 * Return: Pointer with new information.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d = NULL;
if (name == NULL)
{
return (NULL);
}
if (age < 0)
{
return (NULL);
}
if (owner == NULL)
{
return (NULL);
}
d = malloc(sizeof(dog_t));
if (d == NULL)
{
free(d);
return (NULL);
}
else
{
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
return (0);
}
