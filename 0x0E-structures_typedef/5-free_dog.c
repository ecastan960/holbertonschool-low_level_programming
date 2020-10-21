#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - function to free alocated memory of pointer
 *
 * @d: pointer of structure
 *
 */

void free_dog(dog_t *d)
{
free(d);
}