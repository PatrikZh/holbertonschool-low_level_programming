#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function
 * @d: the given value
 * @name: the given value
 * @age: the given value
 * @owner: the given value
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
