#include "dog.h"
#include <stdio.h>

/**
 * print_dog - writes the character c to stdout
 *
 * @d: function
 *
 */

void print_dog(struct dog *d)
{
if (d != 0)
{
printf("Name: %s\n", d->name);
printf("Age: %.1f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
