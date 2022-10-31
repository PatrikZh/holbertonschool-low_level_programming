#ifndef DOG_H
#define DOG_H
/**
 * struct dog - funtion
 * @name: the given value
 * @age: the given value
 * @owner: the given value
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif