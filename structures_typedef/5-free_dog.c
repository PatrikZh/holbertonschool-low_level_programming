#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - funciton
 * @d: the given value
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
