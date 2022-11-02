#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - check the code
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;
	dog_t *new_dog;

	for (len1 = 0; name[len1] != '\0'; len1++)

	for (len2 = 0; owner[len2] != '\0'; len2++)

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * len1 + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * len2 + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		new_dog->name[i] = name[i];
	}
	new_dog->name[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
	{
		new_dog->owner[i] = owner[i];
	}
	new_dog->owner[i] = '\0';
	new_dog->age = age;
	return (new_dog);
}
